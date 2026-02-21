#include <stdio.h>

int main () {



    float battery_temp;
    int charge, break_state;
    char door_state;

    printf("Batarya sıcaklığını giriniz: ");
    scanf(" %f",&battery_temp);
    if(battery_temp>=60){
        printf("Batarya sıcaklığı çok yüksek. Motoru çalıştırmak sistem tarafından kitlendi.\n"); //batarya sıcaklığı güvenlik açısından önemli olduğundan, sıcaklık yüksekse en başta uyarıyor.
    }
        else{
            printf("Şarj yüzdesini giriniz: ");
            scanf(" %d",&charge);
                if(charge>100){
                    printf("KRİTİK HATA: Şarj seviyesi %d. Lütfen sensör verilerini kontrol ediniz.\n",charge);
                }
                else{
                    printf("Fren pedalına basıyorsanız '1', basmıyorsanız '0' tuşlayınız: ");
                    scanf(" %d",&break_state);
                    if (break_state != 0 && break_state != 1){
                        printf("Lütfen doğru bir değer giriniz.\n");
                        
                    }
                        else{
                            printf("Kapı durumu (A/K): ");
                            scanf(" %c",&door_state);
                            if(door_state != 'A' && door_state != 'K'){
                                printf("Lütfen kapı durumunu belirtilen şekilde giriniz.\n");
                            }
                                else if (charge>=20 && charge<=100 && battery_temp<60 && break_state == 1 && door_state == 'K'){
                                    printf("Motor çalıştırılıyor...\n");
                                }
                                else {
                                    if(charge<=20){
                                    printf("Şarj seviyesi düşük. Optimum sürüş için bataryayı şarj ediniz. \n");
                                }
                                    if(break_state==0){
                                    printf("Fren pedalı basılı değil. Güvenliğiniz için fren pedalına basarak çalıştırınız.\n");
                                }
                                    if(door_state=='A'){
                                    printf("Kapılar açık. Güvenliğiniz için kapıları kapatıp çalıştırın.\n");
                                }
                                printf("Motor başlatılmadı.\n");
                            }
                        }
                }
        }
    return 0;

}