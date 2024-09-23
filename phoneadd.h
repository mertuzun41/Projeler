int phoneAdd(){
    Record newRecord;
    FILE* fptr;
    fptr = fopen("data.txt","a");
    if(fptr == NULL){
        return -1;
    }else{
    printf("\n\n");
    printf("Isim giriniz (en fazla 20 karakter): ");
    scanf("%s",newRecord.name);
    printf("Soy isim giriniz (en fazla 20 karakter): ");
    scanf("%s",newRecord.lastname);
    printf("Numara giriniz (en fazla 11 karakter): ");
    scanf("%s",newRecord.phone);
    fprintf(fptr, "\n%s %s %s",newRecord.name,newRecord.lastname,newRecord.phone);
    fclose(fptr);
    }
    





    return 0;
}