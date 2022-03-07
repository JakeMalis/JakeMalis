# Hi there 👋, I'm Jake!

Software developer with experience in using development tools such as Git for version control and Google Cloud and DigitalOcean for hosting. Familiar with HTML, CSS, MySQL/PostgreSQL, Javascript/Node, Python, Go, and Java. Researching artificial intelligence, hosting guest speakers as the president/founder of my school's AI and Deep Learning Club, and teaching lower schoolers about artificial intelligence.

<hr/>

### 🔭 I’m currently working on [Cloud Chamber Research](https://github.com/JakeMalis/Cloud-Chamber)
Researching artificial intelligence for classification, quantification, and localization of tracks caused by ionizing radiation seen within a supersaturated environment.

> Galactic cosmic rays are a mixture of high-energy photons and subatomic particles formed by supernova explosions and other cosmic events. As cosmic rays enter Earth’s atmosphere, they interact mainly with oxygen and nitrogen molecules. This phenomenon, known as an air shower, results in secondary radiation including x-rays, protons (p), alpha particles (α), pions (π), muons (μ−), electrons (e−), neutrinos (ν), and neutrons (n). Currently, accurately tracking and quantifying cosmic rays is difficult; direct detection methods--including particle detectors housed in the ISS, satellites, or high-altitude balloons-- require a considerable amount of time to develop the readings. Indirect detection methods, specifically extensive air shower arrays, require large areas of land and highly specialized, expensive equipment. Historically, the Wilson cloud chamber was used as an indirect detection method; this cheap and widely available method is widely disregarded in the scientific community as it requires careful manual tracking which can only be detected the instant particles pass through the chamber. Substituting the manual work required for tracking and classifying particles passing through the cloud chamber by using an artificial neural network (ResNet), detection using object detection resulted in a mean average precision of ≥89%.


### 🧑‍💻 I coded the first generation backend for a tournament bracketing company, [Brackot](https://www.brackot.com)

The backend consisted of 2 parts: a serverless cloud backend that managed database transactions, automated sign-up/confirmation emails, file compression for profile pictures (*shown below*), and database clean-up functionality for big database format changes; and a client-side backend that handled authentication, bracket generation and formatting, and filtering for tournaments.

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

### 🧠 I'm also working on brainstorming ⚡️ an idea for a scheduling app for students
The issue with existing scheduling apps like Apple Calendar and Apple Reminders is that it doesn't link the two to form a schedule. It's better to integrate with Apple calendars & reminders, rather than competing with them. Everything added in app should also be reflected in Apple ecosystem products.

### 📚 I'm getting a certificate from DataCamp for [Introduction to Deep Learning in Python](https://www.datacamp.com/courses/introduction-to-deep-learning-in-python)
```
#Building your own digit recognition model
# Create the model: model
model = Sequential()

# Add the first hidden layer
model.add(Dense(50, activation='relu', input_shape=(784,)))

# Add the second hidden layer
model.add(Dense(50, activation='relu'))

# Add the output layer
model.add(Dense(10, activation='softmax'))

# Compile the model
model.compile(optimizer='adam',
              loss='categorical_crossentropy',
              metrics=['accuracy'])

# Fit the model
model.fit(X, y, validation_split=0.3)
```

### ✍️ When I was 14 I wrote an article explaining the basics of deep learning [Intro To Deep Learning: Taught by a 14-Year Old](https://medium.com/towards-data-science/intro-to-deep-learning-taught-by-a-14-year-old-6c49fc94d66)

![1*FVYJ7zvP3KmnIq08tvFXQQ](https://user-images.githubusercontent.com/18268912/157100572-6b17a3c6-d86d-4e47-a418-8a3f8c57a500.png)


<!--
### 🌱 I’m currently learning
- Jax
### 💬 Ask me about ...
### 📫 How to reach me: ...
### 😄 Pronouns: he/him
### ⚡ Fun fact: ...
