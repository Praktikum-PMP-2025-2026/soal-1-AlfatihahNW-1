#include <stdio.h>
#include <string.h>

/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : Overview of C Language
 *   Hari dan Tanggal    : Senin, 13 April 2026
 *   Nama (NIM)          : 13224095
 *   Nama File           : soal1.c
 *   Deskripsi           : Sebuah gerbang keamanan memproses data satu peneliti. Tentukan status akhir peneliti berdasarkan level izin, suhu, radiasi, dan jam.
 * 
 */

int main(){
    int izin,suhu,radiasi,jam;
    scanf("%d %d %d %d", &izin, &suhu, &radiasi, &jam);
    
    if (radiasi >= 6){
        printf("TOLAK");
    }
    else {
        if (suhu >= 390){
            printf("KARANTINA");
        }
        else {
            if (izin == 1){
                if (jam<6 || jam>20){
                    printf("TOLAK");
                }
                else {
                    printf("MASUK");
                }
            }
            
            if (izin == 2){
                if (radiasi<=2 && (jam >=8 && jam <=18)){ 
                    printf("MASUK");
                }
                else{
                    printf("PEMERIKSAAN");
                }
            }
            if (izin ==3){
                if (radiasi ==0 && suhu < 380){
                    printf("MASUK");
                }
                else {
                printf("TOLAK");
                
                }
                
            }
        }
    }
}