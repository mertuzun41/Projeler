#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "header.h"
#include "menu.h"
#include "phoneadd.h"
#include "phonelist.h"
#include "phonesearch.h"


int main(){
    int choice=0;
    char searchName[20];
    int searchResult=0;
    menu();
    do{
        printf("\n\n Seciminizi girin: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:if(phoneAdd() == 0){
                printf("\n Telefon numarasi basarili bir sekilde eklendi.\n");
            }else{
                printf("\n Telefon numarasi eklenirken hata olustu.\n");
            }
            break;
            case 2:if(phoneList()==0){
                printf("\nTelefon numaralari basarili bir sekilde listelendi");
            }else{
                printf("\n Telefon numarasi listelenirken hata olustu.\n");
            }
            break;
            case 3:printf("Aranacak ismi giriniz: ");
            scanf("%s",&searchName);
            searchResult=phoneSearch(searchName);
            if(searchResult == 0){
                printf("\nAranan kayit bulunamadi\n");
            }else{
                printf("\nToplam %d Kayit Bulundu\n",searchResult);
            }break;
            case 4:printf("\n*Cikis yaptiniz Iyi Gunler*");
            return 0;
            break;
            default:printf("Lutfen 1-4 arasi secim yapiniz!\n");
        }

    }while(choice != 4);

    return 0;
}