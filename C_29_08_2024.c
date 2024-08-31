 #include<string.h>
  
char* analyser_age(int age){
static char message[50];
if(age<18) {strcpy(message,"Vous êtes jeune.");
}
if(18<age<35) {strcpy(message,"Vous êtes un jeune adulte.");
}
if(35<age<60) {strcpy(message,"Vous êtes d'âge moyen.");
}
if(60<age) {strcpy(message,"Vous êtes vieux.");
}
return message;
}
