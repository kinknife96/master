#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include"Recursion.h"
#include"NoRecursion.h"

int main()
{
    int selection;
    do
    {
        printf("\n");
        
        int menusize = 14;
        char ** menu = (char **) malloc(sizeof(char*) * menusize);
        
        menu[0] = 	"Tinh phan tu thu n cua day 1";
        menu[1] = 	"Tinh phan tu thu n cua day 2";
        menu[2] = 	"Tinh phan tu thu n cua day 3";
        menu[3] = 	"Tinh phan tu thu n cua day 4";
        menu[4] = 	"Tinh phan tu thu n cua day 5";
        menu[5] = 	"Tinh tong day 1 co de quy";
        menu[6] = 	"Tinh tong day 2 co de quy";
        menu[7] = 	"Tinh tong day 3 co de quy";
        menu[8] = 	"Tinh tong day 4 co de quy";
        menu[9] = 	"Tinh tong day 1 khong de quy";
        menu[10] = 	"Tinh tong day 2 khong de quy";
        menu[11] =  "Tinh tong day 3 khong de quy";
        menu[12] =  "Tinh tong day 4 khong de quy";
        menu[13] = 	"Ket thuc chuong trinh";
        
        int i;
        printf("\nDanh sach cac lenh:\n");
        for (i = 0; i < menusize; ++i)
        {
            printf("\n\t%d, %s", i+1, menu[i]);
        }
        
        
        do
        {
            printf("\n\nNhap vao lenh ban muon thuc hien (1-14):");
            fflush(stdin);
            scanf("%d", &selection);
        } while (selection < 1 || selection > 14);
        int m;
        switch (selection)
        {
            case 1 :
            {
                printf(" Nhap so thu tu phan tu muon tinh : ");
                scanf("%d",&m);
                printf(" So can tim la : %li",S(m));
                break;
            }
            case 2 :
            {
                printf(" Nhap so thu tu phan tu muon tinh : ");
                scanf("%d",&m);
                printf(" So can tim la : %li",F(m));
                break;
            }
            case 3 :
            {
                printf(" Nhap so thu tu phan tu muon tinh : ");
                scanf("%d",&m);
                printf(" So can tim la : %li",G(m));
                break;
            }
            case 4 :
            {
                printf(" Nhap so thu tu phan tu muon tinh : ");
                scanf("%d",&m);
                printf(" So can tim la : %li",H(m));
                break;
            }
            case 5 :
            {
                printf(" Nhap so thu tu phan tu muon tinh : ");
                scanf("%d",&m);
                printf(" So can tim la : %f",X(m));
                break;
            }
            case 6 :
            {
                printf(" Nhap so phan tu : ");
                scanf("%d",&m);
                printf(" Tong can tinh la : %li",tong_1(m));
                break;
            }
            case 7:
            {
                printf(" Nhap so phan tu : ");
                scanf("%d",&m);
                printf(" So can tinh la : %li",tong_2(m));
                break;
            }
            case 8:
            {
                printf(" Nhap so phan tu : ");
                scanf("%d",&m);
                printf(" So can tinh la : %li",tong_3(m));
                break;
            }
            case 9:
            {
                printf(" Nhap so phan tu : ");
                scanf("%d",&m);
                printf(" So can tinh la : %li",tong_4(m));
                break;
            }
            case 10:
            {
                printf(" Nhap so phan tu : ");
                scanf("%d",&m);
                printf(" So can tinh la : %li",no_tong_1(m));
                break;
            }
            case 11:
            {
                printf(" Nhap so phan tu : ");
                scanf("%d",&m);
                printf(" So can tinh la : %li",no_tong_2(m));
                break;
            }
            case 12:
            {
                printf(" Nhap so phan tu : ");
                scanf("%d",&m);
                printf(" So can tinh la : %li",no_tong_3(m));
                break;
            }
            case 13:
            {
                printf(" Nhap so phan tu : ");
                scanf("%d",&m);
                printf(" So can tinh la : %li",no_tong_4(m));
                break;
            }
            case 14:
            {
                printf("\nChuong trinh dang ket thuc! ");
                Sleep(300);
                printf(".");
                Sleep(300);
                printf(".");
                Sleep(300);
                printf(".\n\n");
                break;
            }
        }
    } while(selection != 14);
}