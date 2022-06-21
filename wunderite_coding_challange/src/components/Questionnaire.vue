<template>
    <div class="questionnaire">
        <div class="questionnaire_menu" @click="$refs.copyQuestionnaireModal.openModal()">
            <font-awesome-icon icon="ellipsis-vertical" />
        </div>
        <div class="questionnaire_thumb">
            <div class="questionnaire_thumb_border">
                <img id="thumb" src="../assets/acord.png" alt="Acord 125 Preview">
            </div>
        </div>
        <div class="questionnaire_content">
            <h4>{{ fileType + ': ' + fileName }}</h4> 
            <p id="content_text">Record general client information including business location and contact details, business description, and prior insurance history</p> 
        </div>
        <modal ref="copyQuestionnaireModal">
            <template v-slot:header>
                <h1>Copy Questionnaire</h1>
            </template>

            <template v-slot:body>
                <p id="modal_text">
                Making a copy of <b>{{fileType + ': ' + fileName}}</b> allows you to create a new version of the same questionnaire.
                </p>
            </template>
            <template v-slot:footer>
                <div class="d-flex align-items-center justify-content-between">
                    <button class="btn btn--secondary" @click="$refs.copyQuestionnaireModal.closeModal()">Cancel</button>
                    <button class="btn btn--primary" @click="duplicateQuestionnaire">Copy Questionnaire</button>
                </div>
            </template>
        </modal>
    </div>
</template>

<script>
import Modal from "./Modal.vue";

export default {
  name: 'QuestionnaireComponent',
  props: {
    fileType: String,
    fileName: String
  },
  components: {
    Modal,
  },
  methods: {
     duplicateQuestionnaire () {
         this.$refs.copyQuestionnaireModal.closeModal();
         this.$emit('duplicate', 'ACORD 125', 'Copy')
     }
   }
}
</script>

<style scoped>
.questionnaire {
    margin: auto;
top: 32px;
left: 439px;
width: 562px;
height: 132px;
/* UI Properties */
background: var(--unnamed-color-f8f9ff) 0% 0% no-repeat padding-box;
background: #F8F9FF 0% 0% no-repeat padding-box;
box-shadow: 0px 1px 3px #00000029;
border-radius: 5px;
opacity: 1;
border: 2px solid transparent;
transition: all 0.5s ease;
margin-top: 16px;
}
.questionnaire:hover {
/* UI Properties */
border: 2px solid #B3BAF9;
}

.questionnaire_thumb {
    float: left;
    top: 32px;
left: 439px;
width: 76px;
height: 132px;
/* UI Properties */
background: #627398 0% 0% no-repeat padding-box;
border-radius: 5px 0px 0px 5px;
opacity: 1;
display: grid;
place-items: center;
}
.questionnaire_thumb_border {
top: 51px;
left: 444px;
width: 66px;
height: 94px;
background: var(--unnamed-color-ffffff) 0% 0% no-repeat padding-box;
background: #FFFFFF 0% 0% no-repeat padding-box;
border-radius: 2px;
opacity: 1;
display: grid;
place-items: center;
}

#thumb {
    top: 58px;
left: 449px;
width: 56px;
height: 80px;
}

h4 {
    top: 49px;
left: 531px;
width: 380px;
    text-align: left;
    font-family: "Montserrat", sans-serif;
    letter-spacing: 0px;
    color: #16244F;
    opacity: 1;
    padding-left: 92px;
}
#content_text {
    top: 82px;
left: 531px;
width: 380px;
    text-align: left;
    font: normal normal normal 16px/22px;
    font-family: "Open Sans", sans-serif;
    letter-spacing: 0px;
    color: #4B5563;
    opacity: 1;
    padding-left: 92px;
}

.questionnaire_menu {
    padding-top: 16px;
padding-right: 15.5px;
    float:right;
top: 48px;
left: 953px;
width: 32px;
height: 32px;
background: #E0E8F9 0% 0% no-repeat content-box;
border-radius: 3px;
opacity: 1;
display: grid;
place-items: center;
}

h1 {
    text-align: left;
font-size: 20px;
font-family: "Montserrat", sans-serif;
letter-spacing: 0px;
color: #16244F;
}

#modal_text {
    text-align: left;
    font: normal normal normal 16px/22px;
    font-family: "Open Sans", sans-serif;
    letter-spacing: 0px;
    color: #4B5563;
}
</style>
