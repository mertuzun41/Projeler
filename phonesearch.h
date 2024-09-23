int phoneSearch(char* ptSearch){
    Record currentRecord;
    int i=0;
    FILE* fptr;
    fptr = fopen("data.txt","r");
    if(fptr == NULL){
        return -1;
    }else{
    while(!feof(fptr)){
       fscanf(fptr,"\n%s %s %s",currentRecord.name,currentRecord.lastname,currentRecord.phone);
       if(!strcmp(ptSearch,currentRecord.name)){
         printf("%s\t\t\t",currentRecord.name);
         printf("%s\t\t\t",currentRecord.lastname);
         printf("%s\n",currentRecord.phone);
         i++;
       }

    }
    fclose(fptr);
    }


    return i;
}
