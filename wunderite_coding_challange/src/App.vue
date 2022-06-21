<template>
  <Questionnaire v-for="questionnaire in Questionnaires" :fileType="questionnaire.fileType" :fileName="questionnaire.fileName" :key="questionnaire.id" @duplicate="duplicateQuestionnaire"/>
</template>

<script>
import Questionnaire from './components/Questionnaire.vue'

export default {
  name: 'App',
  components: {
    Questionnaire
  },
  data() {
    return {
      Questionnaires: [
        {fileType: "ACORD 125", fileName: 'Commercial Insurance Application'},
      ]
    }
  },
  methods: {
      duplicateQuestionnaire (type, name) {
          this.Questionnaires.push({fileType: type, fileName: name})
      }
  }
}
</script>

<style>
#app {
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  box-sizing: border-box;
}
</style>
