#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BG_WHITE        "\x1b[47m"
#define TEXT_YELLOW     "\x1b[33m"
#define TEXT_BLACK      "\x1b[30m"
#define TEXT_ITALIC     "\x1b[3m"
#define TEXT_BOLD       "\x1b[1m"
#define RESET_ALL       "\x1b[0m"


int main() {
    system("cls");
    menu();
}




void menu() {
    int choice;
    

    printf(TEXT_BLACK TEXT_BOLD TEXT_YELLOW TEXT_ITALIC);
    printf("[0] Quit\n[1] Calendar\n[2] Age\n[3] Conversion\n");
    printf("-----------------------------\nSelect Option:  ");
    printf(RESET_ALL);
    printf(TEXT_BOLD);
    scanf("%d", &choice);

    if (choice == 0) {
        system("cls");
        printf("Bye!");
    }
    else if (choice == 1) {
        system("cls");
        inputcalendar();
    }

    else if (choice == 2) {
        system("cls");
        age();
    } 

    else if (choice == 3) {
        system("cls");
        Conversion();
    } 

    else {
        system("cls");
        printf("Invalid Input!\n");
        menu();
    }
}

void back_menu() {
    system("cls");
    printf("Back to menu!\n-----------------------------\n");
    menu();
}










int age () {

int byear , bmonth , bday;

printf(RESET_ALL);

printf(TEXT_ITALIC TEXT_YELLOW TEXT_BOLD);
printf("Enter your birth year : ");
printf(RESET_ALL);
printf(TEXT_BOLD);
scanf("%d" , &byear);

if (byear == 0)
{
    back_menu();
}

printf(TEXT_ITALIC TEXT_YELLOW TEXT_BOLD);
printf ("Enter your birth month: ");
printf(RESET_ALL);
printf(TEXT_BOLD);
scanf("%d" , &bmonth);

if (bmonth == 0)
{
    back_menu();
}

printf(TEXT_ITALIC TEXT_YELLOW TEXT_BOLD);
printf("Enter your birth day: ");
printf(RESET_ALL);
printf(TEXT_BOLD);
scanf("%d" , &bday);

if (bday == 0)
{
    back_menu();
} 
else if (bday > 31)
{
    printf("invalid input!\n\npress 1 to retry\npress 0 to back menu\nselect option : ");
    int rt;
    scanf("%d" , &rt);
    if (rt == 1)
    {
        system("cls");
        age();
    } else if (rt == 0)
    {
        system("cls");
        back_menu();
    }
    
    
    
    
}



c_age (byear , bmonth , bday);

}

int c_age (int byear , int bmonth , int bday) {
    int tyear , tmonth , tday;

    printf(TEXT_ITALIC TEXT_YELLOW TEXT_BOLD);
    printf("This year: ");
    printf(RESET_ALL);
    printf(TEXT_BOLD);
    scanf("%d" , &tyear);
    printf(TEXT_ITALIC TEXT_YELLOW TEXT_BOLD);
    printf("This month: ");
    printf(RESET_ALL);
    printf(TEXT_BOLD);
    scanf("%d" , &tmonth);
    printf(TEXT_ITALIC TEXT_YELLOW TEXT_BOLD);
    printf("This day: ");
    printf(RESET_ALL);
    printf(TEXT_BOLD);
    scanf("%d" , &tday);


    if (tmonth < 1 || tmonth > 12 || tday < 1 || tday > 31 || bmonth < 1 || bmonth > 12 || bday < 1 || bday > 31){
        system("cls");
        printf("Invalid input !\n");
        menu();
    }


        int ayear , amonth , aday;
    if (tday >= bday){
        aday = tday - bday;
        if (tmonth >= bmonth){
            amonth = tmonth - bmonth;
            ayear = tyear - byear;
        }else{
            amonth = tmonth + 12 - bmonth;
            ayear = tyear - byear - 1;
        }
    }
    
    else{
        if (tmonth > bmonth){
            aday = tday + 30 - bday;
            amonth = tmonth - 1 - bmonth;
            ayear = tyear - byear;
        }else{
            aday = tday + 30 - bday;
            amonth = tmonth + 11 - bmonth;
            ayear = tyear - 1 - byear;
        }
    }



    int dp;
    dp = ( (ayear * 365) + (amonth * 30) + aday );

    printf(RESET_ALL);
    printf(TEXT_BLACK TEXT_BOLD TEXT_ITALIC);
    printf("Age : %d years , %d months , %d days\n" , ayear , amonth , aday);
    printf("passed dayes : %d days\n" , dp);
    printf(RESET_ALL BG_WHITE TEXT_BOLD TEXT_BLACK);
    printf("your birthdate : ");

    switch ((byear + bmonth * 100 + bday) % 7){
        case 1:
            printf("Shanbe");
        case 2:
            printf("Yekshanbe");
        break;
        case 3:
            printf("Doshanbe");
        break;
        case 4:
            printf("Seshanbe");
        break;
        case 5:
            printf("Cheharshanbe");
        break;
        case 6:
            printf("Panjshanbe");
        break;
        case 7:
            printf("Jomeh");
        break;
    }

    printf(RESET_ALL);
    printf(TEXT_BOLD);

    printf("\n\n\n");

    printf ("press 0 to back menu \n");
    int bm;
    scanf("%d" , &bm);
    
    if (bm == 0)
    {
        back_menu();
    }

}






int input2_monasebat() {
    system("cls");
    printf ("enter day num for date info : ");
        int n;
        scanf("%d" , &n);
        input_monasebat (n);

}


int input_monasebat (int n) {
    char* monasebatha[31] = {"1 tir : 13 bedar" , "no monasebat" , "no monasebat" ,"no monasebat",
                             "no monasebat" , "no monasebat" ,"no monasebat",
                             "no monasebat" , "no monasebat" ,"no monasebat",
                             "no monasebat" , "no monasebat" ,"no monasebat",
                             "no monasebat" , "no monasebat" ,"no monasebat",
                             "no monasebat" , "no monasebat" ,"no monasebat",
                             "no monasebat" , "no monasebat" ,"no monasebat", 
                             "no monasebat" , "no monasebat" ,"no monasebat",
                             "no monasebat" , "no monasebat" ,"no monasebat",
                             "no monasebat" , "no monasebat" ,"no monasebat"};

            printf("%s\n" , monasebatha[n - 1]);
            printf("press 1 for new date info\npress 0 to back menu\nselect option : ");


            int w;

            scanf("%d" , &w);

            if (w == 0)
            {
                back_menu();
            } else if (w == 1)
            {
                input2_monasebat();
            }
            
            


}



int kabise(int year) {
    if ((year % 100 == 0 && year % 400 == 0) || (year % 100 != 0 && year % 4 == 0)) {
        return 1;
    } else {
        return 0;
    }
}



int month_d(int month , int year){

    if (month == 12)
    {
        return kabise(year) ? 30 : 29;
    }
    else if (month == (7 || 8 || 9 || 10 || 11))
    {
        return 30;
    }
    else {
        return 31;
    }
    
}


void display_calendar(int year , int month){
    char* months[12] = {" Farvardin ", "Ordibehesht", "  Khordad  ", "    Tir    ", "  Mordad   ", " Shahrivar ", "   Mehr    ", "   Aban    ", "   Azar    ", "    Dey    ", "  Bahman   ", "  Esfand   "};
    int i , dow;
    int dom = month_d(month , year);
    dow = (2 + (13 * (month + 12)) / 5 + year + (year / 4) - (year / 100) + (year / 400)) % 7;
    
    printf(TEXT_BLACK TEXT_BOLD BG_WHITE TEXT_ITALIC);
    printf("     %s    \n" , months[month]);
    printf(RESET_ALL);
    printf(TEXT_BLACK TEXT_BOLD TEXT_YELLOW);
    printf("SH YE DO SE CH PA JO\n");
    printf(RESET_ALL);
    printf(TEXT_BOLD);
    for (i = 0; i <dow; i++){
        printf("   ");
    }
    for (i = 1; i <= dom; i++){
        printf("%2d " , i);
        if ((i + dow) % 7 == 0){
            printf("\n");
        }
    }
    printf("\n\n\n");

    printf ("press 0 to back menu \npress 1 to retry\npress 2 to date monasebat\n");
    printf(RESET_ALL);
    printf(TEXT_YELLOW TEXT_ITALIC TEXT_BOLD);
    printf("select option : ");
    int bm;
    printf(RESET_ALL);
    printf(TEXT_BOLD);
    scanf("%d" , &bm);
    
    if (bm == 0)
    {
        back_menu();
    } else if (bm == 1)
    {
        system("cls");
        inputcalendar();
    } else if (bm == 2)
    {
        system("cls");
        input2_monasebat();

    }
    
    
    
    

}



int inputcalendar () {
    int year , month;

    printf(TEXT_BLACK TEXT_BOLD TEXT_YELLOW TEXT_ITALIC);
    printf("ENTER YEAR :");
    printf(RESET_ALL);
    printf(TEXT_BOLD);
    scanf("%d" , &year);
    if (year == 0)
    {
        back_menu();
    }
    
    printf(TEXT_BLACK TEXT_BOLD TEXT_YELLOW TEXT_ITALIC);
    printf("ENTER MONTH :");
    printf(RESET_ALL);
    printf(TEXT_BOLD);
    scanf("%d" , &month);

    if ( month == 0 )
    {
        back_menu();
    } 
    else {
        printf(RESET_ALL) ;
        display_calendar(year , month - 1);
    }
    
}
















int co_mi_to_gh() {

    printf(TEXT_BOLD TEXT_BLACK BG_WHITE);
    printf(" This feature will be activated in the next updates :) ");

    printf(RESET_ALL);
    printf(TEXT_BOLD);
    printf("\n\n\n");

    printf ("press 0 to back menu \n");
    int bm;
    scanf("%d" , &bm);
    
    if (bm == 0)
    {
        back_menu();
    }

}







void convertToMiladi(int shYear, int shMonth, int shDay) {
    int miladiYear, miladiMonth, miladiDay;
    miladiYear = shYear + 621;
    int daysInMonth[] = {31, 28 + ((miladiYear % 4 == 0 && miladiYear % 100 != 0) || (miladiYear % 400 == 0)), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    miladiMonth = shMonth;
    miladiDay = shDay;
    printf(TEXT_BLACK TEXT_BOLD TEXT_YELLOW TEXT_ITALIC);
    printf("MILADI date : ");
    printf(RESET_ALL);
    printf(TEXT_BOLD TEXT_BLACK BG_WHITE);
    printf("%d / %d / %d\n", miladiYear, miladiMonth, miladiDay);

    printf(RESET_ALL);
    printf(TEXT_BOLD);
    printf("\n\n\n");

    printf ("press 0 to back menu \n");
    int bm;
    scanf("%d" , &bm);
    
    if (bm == 0)
    {
        back_menu();
    }
    
}



int co_sh_to_mi() {

    int shYear, shMonth, shDay;
    printf(TEXT_BLACK TEXT_BOLD TEXT_YELLOW TEXT_ITALIC);
    printf("Enter Shamsi date : ");
    printf(RESET_ALL);
    printf(TEXT_BOLD);    
    scanf("%d %d %d", &shYear, &shMonth, &shDay);

    if (shYear == 0 || shMonth == 0 || shDay == 0)
    {
        back_menu();
    }
    

    convertToMiladi(shYear, shMonth, shDay);

}



int Conversion() {
int c;
printf(TEXT_BLACK TEXT_BOLD TEXT_YELLOW TEXT_ITALIC);
printf("[1] shamsi => miladi\n[2] miladi => gamari\n");
printf(RESET_ALL);
printf(TEXT_BOLD);
scanf("%d" , &c);

if (c == 0)
{
    back_menu();
}



switch (c)
{
case 1:
    co_sh_to_mi();
    break;

case 2:
    co_mi_to_gh();
    break;
}


}
