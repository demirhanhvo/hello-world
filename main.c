#include <stdio.h>

int main () {



    float battery_temp;
    int charge, break_state;
    char door_state;

    printf("Batarya sıcaklığını giriniz: ");
    scanf(" %f",&battery_temp);
    if(battery_temp>=60){
        printf("Batarya sıcaklığı çok yüksek. Motoru çalıştırmak sistem tarafından kitlendi.\n");
    }
        else{
            printf("Şarj yüzdesini giriniz: ");
            scanf(" %d",&charge);
            if(charge<=20){
                printf("Şarj seviyesi düşük. Optimum sürüş için bataryayı şarj ediniz. \n");
            }
                else{
                    printf("Fren pedalına basıyorsanız '1', basmıyorsanız '0' tuşlayınız: ");
                    scanf(" %d",&break_state);
                    if(break_state==0){
                        printf("Fren pedalı basılı değil. Güvenliğiniz için fren pedalına basarak çalıştırınız.\n");
                    }
                        else{
                            printf("Kapı durumu (A/K): ");
                            scanf(" %c",&door_state);
                            if(door_state=='A'){
                                printf("Kapılar açık. Güvenliğiniz için kapıları kapatıp çalıştırın.\n");
                            }
                                else{
                                    printf("Motor çalıştırılıyor...\n");
                                }
                        }
                }
        }
    return 0;

}