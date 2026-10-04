#include <stdio.h>

struct isci{ 
        char adi[30]; 
        char soyadi[30];
        int yas; 
        double aylikucret;
        };

struct isci bilgial(struct isci a){
    printf("iscinin adi:");
    scanf("%s",a.adi);

    printf("soyadi:");
    scanf("%s",a.soyadi);

    printf("iscinin yasi:");
    scanf("%d",&a.yas);

    printf("iscinin aylik ucreti:");
    scanf("%lf",&a.aylikucret);

    return a;
}

void bilgiyazdir (struct isci a){
    printf("iscinin adi soyadi:%s %s\n",a.adi,a.soyadi);
    printf("iscinin yasi:%d\n",a.yas);
    printf("iscinin aylik geliri:%.2lf TL\n",a.aylikucret);
}

int main(){
    struct isci calisanlar[100];
    int giris;
    int a=0;
    int i;

    while(1){
        printf("calisan bilgisi kaydetmek icin 1, kayitlari yazdirmak icin 2, cikmak icin 3 giriniz.");
        scanf("%d",&giris);

        switch(giris){
            case 1:
                if(a<100){
                    calisanlar[a]=bilgial(calisanlar[a]);
                    a++;
                    printf("kayit basariyla olusturuldu.\n");
                }
                else{
                    printf("kapasite doldu kayit basarisiz.\n");
                }
                
                break;

            case 2:
                if(a==0){
                    printf("henuz kayitli calisan yok.\n");
                }
                else{
                    printf("\n====calisan listesi====\n");
                    for(i=0;i<a;i++){
                        bilgiyazdir(calisanlar[i]);
                        printf("\n");                    
                    }
                }
                break;

            case 3:
                printf("programdan cikiliyor...");
                return 0;

            default:
                printf("gecersiz numara lütfen tekrar deneyiniz.\n");
                break;
        }  
    }
    return 0;
}