# 👋 Hi, I'm Jake!

I'm a full-stack developer who's passionate about software development, artificial intelligence, and DevOps. Looking forward to building the future of technology.

<hr/>

### 🧮 Competeted in MIT's iQuHACK 2023 Hackathon working on [Quantinuum's Quantum Approximate Optimisation Algorithm Challenge](https://github.com/JakeMalis/2023_Quantinuum/blob/InsertTeamName/team_solutions/InsertTeamName/InsertTeamCode.ipynb)

The challenge was to improve the existing Max-Cut Cost function by, which my team accomplished by creating a more efficient SPSA algorithm and using gradient descent to estimate the gradient of the objective function by partial derivative in each variable. Below is a proof-of-concept for this using Google's Cirq Quantum SDK.

```
def qaoa_cost(params):
    qc = cirq.Circuit()
    for i in range(num_layers):
        qc.append(cirq.rx(params[2*i]).on(cirq.LineQubit(0)))
        qc.append(cirq.rx(params[2*i]).on(cirq.LineQubit(1)))
        qc.append(cirq.rz(params[2*i + 1]).on(cirq.LineQubit(0)))
        qc.append(cirq.rz(params[2*i + 1]).on(cirq.LineQubit(1)))
        qc.append(cirq.CNOT(cirq.LineQubit(0), cirq.LineQubit(1)))
    simulator = cirq.Simulator()
    result = simulator.simulate(qc)
    final_state = result.final_state_vector
    cost = np.abs((final_state.conj().T @ H_d.matrix() @ final_state).real)
    return cost
```

### 🔭 Conducted research on [Cloud Chambers and Artificial Intelligence](https://github.com/JakeMalis/Cloud-Chamber)
Researched artificial intelligence for classification, quantification, and localization of tracks caused by ionizing radiation seen within a supersaturated environment.

> Galactic cosmic rays are a mixture of high-energy photons and subatomic particles formed by supernova explosions and other cosmic events. As cosmic rays enter Earth’s atmosphere, they interact mainly with oxygen and nitrogen molecules. This phenomenon, known as an air shower, results in secondary radiation including x-rays, protons (p), alpha particles (α), pions (π), muons (μ−), electrons (e−), neutrinos (ν), and neutrons (n). Currently, accurately tracking and quantifying cosmic rays is difficult; direct detection methods--including particle detectors housed in the ISS, satellites, or high-altitude balloons-- require a considerable amount of time to develop the readings. Indirect detection methods, specifically extensive air shower arrays, require large areas of land and highly specialized, expensive equipment. Historically, the Wilson cloud chamber was used as an indirect detection method; this cheap and widely available method is widely disregarded in the scientific community as it requires careful manual tracking which can only be detected the instant particles pass through the chamber. Substituting the manual work required for tracking and classifying particles passing through the cloud chamber by using an artificial neural network (ResNet), detection using object detection resulted in a mean average precision of ≥89%.
> 
>  _Malis, Jake. "Using convolutional neural networks to classify and localize ionized particles from cosmic rays"_

[Read Full Paper](https://github.com/JakeMalis/CloudChamber/blob/main/cosmic%20rays%2C%20cnns%2C%20cloud%20chamber.pdf)

### 🧑‍💻 I coded the first generation backend for a tournament bracketing company, [Brackot](https://github.com/JakeMalis/brackot)

Designed and wrote the code for the V1 backend. The backend consisted of 2 parts: serverless backend and client-side backend. Designed serverless backend for managing database transactions, sending sign-up/confirmation emails, file compression (_shown below_), and database migrations while preventing cold starts resulting in 400ms average function run time. Deployed client-side backend to handle authentication, bracket generation and formatting, and filtering for tournaments serving more than 2,000 concurrent users.

```
exports.compressProfilePicture = functions.region('us-east1').storage.object().onFinalize(async (object) => {
  const filePath: string = object.name!;
  const fileBucket = object.bucket;
  const fileName = path.basename(filePath);

  const bucket = admin.storage().bucket(fileBucket);
  const localFilePath = path.join(os.tmpdir(), fileName);

  await bucket.file(filePath).download({destination: localFilePath}).then(async () => {
    await compress_images(localFilePath, '/tmp/', { compress_force: false, statistic: true , autoupdate: false }, false,
        { jpg: { engine: "mozjpeg", command: ["-quality", "60"] } },
        { png: { engine: "pngquant", command: ["--quality=20-50", "-o"] } },
        { svg: { engine: "svgo", command: "--multipass" } },
        { gif: { engine: "gifsicle", command: ["--colors", "64", "--use-col=web"] } },
      function (error, completed, statistic) {
        functions.logger.log("-------------");
        functions.logger.log(error);
        functions.logger.log(completed);
        functions.logger.log(statistic);
        functions.logger.log("-------------");
      }
    );

    const newFilePath = path.join(path.dirname(filePath), fileName);
    functions.logger.log(newFilePath);

    await bucket.upload(localFilePath, {
      destination: 'compressedImage/compressed.png'
    });
  });

  fs.unlinkSync(localFilePath);
});
```
