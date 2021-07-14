/*
HOTEL MANAGMENT SYSTEM For Course Work 2 - Programming Fundamentals
Start Date :- 13.03.2021
End Date :-

-----------Group Members-----------
    ANFAS ARSHAD [INDEX]
    HASINDU [INDEX]
    NIMMI [INDEX]
    UMESH [INDEX]
    RAMESH RUKSHAN [CODSE202F-022]
-----------------------------------

10 functions include with void main
14 Global Variables & 17 Local Variables
*/


#include<stdio.h>

int tempValue,total,paymentStatus;                              //declare int variable tempValue for temporary call in all functions total for cart
char FirstName[10],LastName[10],Address[50],email[30],YesNo;        //declare char type variables use for customer info and temporary Yes NO
int contactNum,roomCost,foodCost,barCost,tripCost,spaCost;     //declare int variables for calculations
long long int IDnum;

//Landing Page

void landing()
{
    printf("\n------------------------------------------------------------------\n\n");
    printf("   ##   ##  ######  ##      ######  ######  ###  ###  ######\n");
    printf("   ##   ##  ##      ##      ##      ##  ##  ## ## ##  ##    \n");
    printf("   ## # ##  ######  ##      ##      ##  ##  ##    ##  ######\n");
    printf("   ### ###  ##      ##      ##      ##  ##  ##    ##  ##    \n");
    printf("   ##   ##  ######  ######  ######  ######  ##    ##  ######\n\n\n");
    printf("           - T H E  L O N G  B E A C H  H O T E L -");
    printf("\n-----------------------------------------------------------------\n");
    printf("                - Booking & Billing System - ");
    printf("\n-----------------------------------------------------------------\n");
    printf("\n                           ***\n");
    printf("\n                 www.thelongbeachhotel.lk");
    printf("\n                   +94 41 222 22 58");
    printf("\n                  The Long Beach Hotel");
    printf("\n                   Galle road, Kokgala\n");
    printf("\n                           ***\n");
    printf("\n-----------------------------------------------------------------\n");
}

//customer info

void customerInfo()
{

    printf("\n-----------------------------------------------\n");
    printf("           - CUSTOMER INFORMATION -\n");
    printf("\n-----------------------------------------------\n");      //heading

    printf("\nFirst Name :- ");
    scanf("%s",&FirstName);             //getting customer informations
    printf("\nLast Name :- ");
    scanf("%s",&LastName);
    printf("\nHome Address (Don't Use Space) :- ");
    scanf("%s",&Address);
    printf("\nContact number :- +94 ");
    scanf("%d",&contactNum);
    printf("\nNIC number :-  ");
    scanf("%lld",&IDnum);
    printf("\ne-mail address :- ");
    scanf("%s",&email);
}

void menue()
{
    printf("\n-----------------------------------------------\n");
    printf("             - M A I N   M E N U E -");
    printf("\n-----------------------------------------------\n\n\n\n");

    printf("\n1 | BOOKINS");
    printf("\n2 | FOOD CENTER");
    printf("\n3 | BAR");
    printf("\n4 | TRIPS");
    printf("\n5 | SPA");
    printf("\n6 | CHECK OUT");
    printf("\n7 | ASIGN NEW CUSTOMER");
    printf("\n9 | CLEAR CART");
    printf("\n0 | EXIT");
    printf("\n\n\n---------------------\n");
    printf("\n Select Option -> ");
    scanf("%d",&tempValue);
}

//void main function | Main Code-----------------------------------------------------

void main()
{
    paymentStatus = 0;

    landing();
    clearScreen();
    customerInfo();
    clearScreen();
    menue();

    while (tempValue != 0){

        clearScreen();
        if (tempValue == 1){
            booking();
        }else if(tempValue == 2){
            foodCenter();
        }else if(tempValue == 3){
            bar();
        }else if(tempValue == 4){
            trips();
        }else if(tempValue == 5){
            spa();
        }else if(tempValue == 6){
            checkout();
        }else if(tempValue == 7){
            total = 0,roomCost = 0,foodCost = 0,barCost = 0,tripCost = 0,spaCost = 0;
            customerInfo();
        }else if(tempValue == 9){
            printf("Are You Sure [Y/N] :- ");
            scanf("%s",&YesNo);
            if(YesNo == 'Y' || YesNo == 'y'){
                total = 0,roomCost = 0,foodCost = 0,barCost = 0,tripCost = 0,spaCost = 0;
                clearScreen();
                printf("\n\n\n\n\n\n\n\n\n.........D O N E !...........\n\n\n\n\n\n\n\n\n");
                printf("Enter 0 to exit -> ");
                scanf("%d");
            }
        }else{
            clearScreen();
            printf("\n\n - Invalid Input - ");
        }
        clearScreen();
        menue();
    }
}

//-----------------------------------------------------------------------------------------------------


//checkout page

void checkout()
{
    int cardNumber,expDate,vcc;

    printf("\n-----------------------------------------------------------------------------------\n");
    printf("                                   - C H E C K  O U T -");
    printf("\n-----------------------------------------------------------------------------------\n");

    printf("\n\n----------------------CUSTOMER INFO----------------------\n");

    printf("\nCustomer Name :- %s %s",FirstName,LastName);
    printf("\nNIC Number    :- %lld",IDnum);
    printf("\nPhone Number  :- +94 %d",contactNum);
    printf("\nAddress       :- %s",Address);
    printf("\ne-mail        :- %s",email);

    printf("\n\n------BILLING DETAILS------\n");


    printf("\nBOOKING     :- %d LKR",roomCost);
    printf("\nFOOD CENTER :- %d LKR",foodCost);
    printf("\nBAR         :- %d LKR",barCost);
    printf("\nTRIPS       :- %d LKR",tripCost);
    printf("\nSPA         :- %d LKR",spaCost);

    total = roomCost+foodCost+barCost+tripCost+spaCost;

    printf("\n\n-----------------------\n");
    printf("T O T A L | %d LKR",total);
    printf("\n-----------------------\n");

    printf("\n-----------------------------------------------------------------------------------\n");
    printf("Proceed to Pay [Y/N]\n -> ");
    scanf("%c",&YesNo);
    if (YesNo == 'Y' || YesNo == 'y'){
        printf("\n\n------BILLING DETAILS------\n");
        printf("Credit or Debit Card Number :- ");
        scanf("%d",&cardNumber);
        printf("\nExpire Date [YearMonth Ex: 2310] :- ");
        scanf("%d",&expDate);
        printf("\nVCC :- ");
        scanf("%d",&vcc);

        printf("\n\nYou Have payed %d LKR from your card.",total);
        printf("\n-----------------------\n");
        printf("    PAYMENT COMPLETE");
        printf("\n-----------------------\n");
        printf("\n\n------T H A N K  Y O U------\n");
        total = 0,roomCost = 0,foodCost = 0,barCost = 0,tripCost = 0,spaCost = 0;
        printf("Enter 0 for exit to main menue");
        scanf("%s");
    }
}


//SPA page

void spa()
{
    printf("\n-----------------------------------------------------------------------------------\n");
    printf("                                    - S P A -");
    printf("\n-----------------------------------------------------------------------------------\n");

}


//Trip page

void trips()
{
    int price, numberOfParticipent;

    tripCost = 0;

    printf("\n-----------------------------------------------------------------------------------\n");
    printf("                                 - T R I P S -");
    printf("\n-----------------------------------------------------------------------------------\n");

    printf("|   Trip No   |   Trip Name    |   Charge Per One  |    Locations\n\n");
    printf("|       1     |    City Tour   |   2 000 LKR       | location 01, location 02 ...\n");
    printf("|       2     |    Boat Trip   |   3 000 LKR       | location 01, location 02 ...\n");
    printf("|       3     |    UnderWater  |   5 000 LKR       | location 01, location 02 ...\n");

    printf("\n-----------------------------------------------------------------------------------\n");
    printf("Select Option -> ");
    scanf("%d",&tempValue);
    printf("How Many Participants? \n -> ");
    scanf("%d",&numberOfParticipent);

    if (tempValue == 1){
        price = 2000;
    }else if(tempValue == 2){
        price = 3000;
    }else if(tempValue == 3){
        price = 5000;
    }else{
        clearScreen();
        printf("\n\n - Invalid Input - ");
    }
    clearScreen();
    printf("\n\n\n\n\n\n\n\n\n.........D O N E !...........\n\n\n\n\n\n\n\n\n");
    tripCost = price * numberOfParticipent;
    printf("Trip Cost is %d LKR ",tripCost);
    printf("\nGo To Checkout For COMPLTE YOUR payments\n ");
    scanf("%c");

}

//bar page

void bar()
{
   int price, quantity;

   barCost = 0;

    printf("\n-----------------------------------------------\n");
    printf("                   - B A R -");
    printf("\n-----------------------------------------------\n");

    printf ("\n 01 |  Name  | 18,000 LKR");
    printf ("\n 02 |  Name  |  5,000 LKR");
    printf ("\n 03 |  Name  |  4,500 LKR");
    printf ("\n 04 |  Name  | 10,800 LKR");
    printf ("\n 05 |  Name  |  9,200 LKR");
    printf ("\n 06 |  Name  |  5,800 LKR");
    printf ("\n 07 |  Name  |  6,000 LKR");
    printf ("\n 08 |  Name  |  5,000 LKR");
    printf ("\n 09 |  Name  |  5,500 LKR");
    printf ("\n 10 |  Name  |  7,500 LKR");
    printf ("\n 11 |  Name  |  5,000 LKR");

    printf("\n---------------------------------------------------------\n");
    printf("\nSelect Option -> ");
    scanf("%d",&tempValue);

    switch(tempValue)
    {
    case 1:
        price = 18000; break;
    case 2:
        price = 5000; break;
    case 3:
        price = 4500; break;
    case 4:
        price = 10800; break;
    case 5:
        price = 9200; break;
    case 6:
        price = 5800; break;
    case 7:
        price = 6000; break;
    case 8:
        price = 5000; break;
    case 9:
        price = 5500; break;
    case 10:
        price = 7000; break;
    case 11:
        price = 5000; break;
    }

    if(tempValue<12 && tempValue>0){
        printf("\nEnter Quantity \n ->");
        scanf("%d",&quantity);

        clearScreen();
        printf("\n\n\n\n\n\n\n\n\n.........D O N E !...........\n\n\n\n\n\n\n\n\n");
        barCost = price * quantity;
        printf("    Bar Cost : %d LKR ",barCost);
        printf("\nGo To Checkout For COMPLTE YOUR payments\n ");
        scanf("%c");
    }else{
        clearScreen();
        printf("\n - Invalid Input - ");
    }


}


//food page

void foodCenter()
{
    int price,quantity;

    foodCost = 0;

    printf("\n-----------------------------------------------\n");
    printf("              - F O O D  C E N T E R -");
    printf("\n-----------------------------------------------\n");

    printf ("\n 01 | Food Name");
    printf ("\n 02 | Food Name");
    printf ("\n 03 | Food Name");
    printf ("\n 04 | Food Name");
    printf ("\n 05 | Food Name");
    printf ("\n 06 | Food Name");
    printf ("\n 07 | Food Name");
    printf ("\n 08 | Food Name");
    printf ("\n 09 | Food Name");
    printf ("\n 10 | Food Name");
    printf ("\n 11 | Food Name");

    printf("\n---------------------------------------------------------\n");
    printf("\nSelect Option -> ");
    scanf("%d",&tempValue);

    switch(tempValue)
    {
    case 1:
        price = 80; break;
    case 2:
        price = 50; break;
    case 3:
        price = 45; break;
    case 4:
        price = 18; break;
    case 5:
        price = 92; break;
    case 6:
        price = 58; break;
    case 7:
        price = 60; break;
    case 8:
        price = 50; break;
    case 9:
        price = 55; break;
    case 10:
        price = 70; break;
    case 11:
        price = 50; break;
    }

    if (tempValue<12 && tempValue>0){
        printf("\nEnter Quantity \n ->");
        scanf("%d",&quantity);

        clearScreen();
        printf("\n\n\n\n\n\n\n\n\n.........D O N E !...........\n\n\n\n\n\n\n\n\n");
        foodCost = price * quantity;
        printf("    Food Cost : %d LKR ",foodCost);
        printf("\nGo To Checkout For COMPLTE YOUR payments\n ");
        scanf("%c");
    }else{
        clearScreen();
        printf("\n - Invalid Input - ");
    }


}


//booking page

void booking()
{
    int NoOFDays,RoomCost,HallSize,HallType;
    char RoomType,Hall_Type;

    roomCost = 0;
    HallSize = 0;
    RoomCost = 0;
    NoOFDays = 0;

    printf("\n-----------------------------------------------\n");
    printf("              - B O O K I N G S -");
    printf("\n-----------------------------------------------\n");

    printf("\n 1 | Room Booking");
    printf("\n 2 | Hall Booking");
    printf("\n---------------------\n");
    printf("\nSelect Option -> ");
    scanf("%d",&tempValue);

    if (tempValue == 1){
        printf("\n----------------------ROOM BOOKING----------------------\n");
        printf("|   Room Type |   Type Name    |   Charge For One Day\n\n");
        printf("|       A     |  Economy Class |        2000 LKR \n");
        printf("|       B     | Business Class |        5000 LKR \n");
        printf("|       C     |  Luxuary Class |       10000 LKR \n");

        printf("\n---------------------------------------------------------\n");
        printf("Select Option -> ");
        scanf("%s",&RoomType);
        printf("\nHow Many Days Do you Stay? \n -> ");
        scanf("%d",&NoOFDays);

        if (RoomType == 'A' || RoomType == 'a'){
            RoomCost = 2000;
        }else if(RoomType == 'B' || RoomType == 'b'){
            RoomCost = 5000;
        }else if(RoomType == 'C' || RoomType == 'c'){
            RoomCost = 10000;
        }else{
            clearScreen();
            printf("\n\n - Invalid Input - ");
        }

        clearScreen();
        printf("\n\n\n\n\n\n\n\n\n.........D O N E !...........\n\n\n\n\n\n\n\n\n");
        roomCost = (RoomCost*NoOFDays) + (HallSize*NoOFDays);
        printf("Booking Cost is %d LKR ",roomCost);
        printf("\nGo To Checkout For COMPLTE YOUR payments\n ");
        scanf("%c");

    }else if (tempValue == 2){
        printf("\n----------------------HALL BOOKING----------------------\n");
        printf("|      Type   |      Type Name\n\n");
        printf("|       A     |     Wedding Hall\n");
        printf("|       B     | Business or Meeting Hall\n");
        printf("|       C     |  Party or Other Event\n");

        printf("\n---------------------------------------------------------\n");
        printf("Select Option -> ");
        scanf("%s",&Hall_Type);

        if (Hall_Type == 'A' || Hall_Type == 'a'){
            printf("\n----------------------WEDDING HALL----------------------\n");
            printf("|   Hall Size |   Type Name    |   Charge For One Day  |    Max Participant |\n\n");
            printf("|       1     |    Starter     |        380 000 LKR       |        100\n");
            printf("|       2     |      Basic     |        500 000 LKR       |        250\n");
            printf("|       3     |    Premium     |        800 000 LKR       |        500\n");

            printf("\n---------------------------------------------------------\n");
            printf("Select Option -> ");
            scanf("%d",&HallType);
            printf("\nHow Many Days Do you Want? \n -> ");
            scanf("%d",&NoOFDays);
            if(HallType == 1){
                HallSize = 380000;
            }else if(HallType == 2){
                HallSize = 500000;
            }else if(HallType == 3){
                HallSize = 800000;
            }else{
                clearScreen();
                printf("\n\n - Invalid Input - ");
            }

        }else if(Hall_Type == 'B' || Hall_Type == 'b'){
            printf("\n----------------------BUSINESS OR MEETING HALL----------------------\n");
            printf("|   Hall Size |   Type Name    |   Charge For One Day  |    Max Participant |\n\n");
            printf("|       1     |    Business    |        250 000 LKR    |        100\n");
            printf("|       2     |     Meeting    |         50 000 LKR    |        20\n");

            printf("\n---------------------------------------------------------\n");
            printf("Select Option -> ");
            scanf("%d",&HallType);
            printf("\nHow Many Days Do you Want? \n -> ");
            scanf("%d",&NoOFDays);

            if(HallType == 1){
                HallSize = 250000;
            }else if(HallType == 2){
                HallSize = 50000;
            }else{
                clearScreen();
                printf("\n\n - Invalid Input - ");
            }
        }else if(Hall_Type == 'C' || Hall_Type == 'c'){
            printf("\n----------------------PARTY OR OTHER EVENT HALL----------------------\n");
            printf("|   Hall Size |   Type Name    |   Charge For One Day     |    Max Participant |\n\n");
            printf("|       1     |    Starter     |         80 000 LKR       |        300\n");
            printf("|       2     |      Basic     |        150 000 LKR       |        600\n");
            printf("|       3     |    Premium     |        200 000 LKR       |       1000\n");

            printf("\n---------------------------------------------------------\n");
            printf("Select Option -> ");
            scanf("%d",&HallType);
            printf("\nHow Many Days Do you Want? \n -> ");
            scanf("%d",&NoOFDays);

            if(HallType == 1){
                HallSize = 80000;
            }else if(HallType == 2){
                HallSize = 150000;
            }else if(HallType == 3){
                HallSize = 200000;
            }else{
                clearScreen();
                printf("\n\n - Invalid Input - ");
            }
        }
        clearScreen();
        printf("\n\n\n\n\n\n\n\n\n.........D O N E !...........\n\n\n\n\n\n\n\n\n");
        roomCost = (RoomCost*NoOFDays) + (HallSize*NoOFDays);
        printf("Booking Cost is %d LKR ",roomCost);
        printf("\nGo To Checkout For COMPLTE YOUR payments\n ");
        scanf("%c");
    }else{
        clearScreen();
        printf("\n - Invalid Input - ");
    }
    /*
    clearScreen();
    printf("\n\n\n\n\n\n\n\n\n.........D O N E !...........\n\n\n\n\n\n\n\n\n");
    roomCost = (RoomCost*NoOFDays) + (HallSize*NoOFDays);
    printf("Booking Cost is %d LKR ",roomCost);
    printf("\nGo To Checkout For COMPLTE YOUR payments\n ");
    scanf("%c");    */

}

//Screen Clear Fonction

void clearScreen()
{
    char pass;
    printf("\nPress Enter to continue ");  //displayed text before clear screen
    scanf("%c",&pass);
    system("cls");          //clear screen command | from -> https://www.tutorialspoint.com/how-to-clear-console-in-c
}

/*
void gocheckout()
{
    char YesNo;
    ptintf("\nGo To Check Out? [Y/N]");
    scanf("%c",&YesNo);
    if (YesNo == 'Y' || YesNo == 'y'){
        clearScreen();
        checkout();
    }
}
*/
