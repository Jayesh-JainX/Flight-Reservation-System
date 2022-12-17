#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

char a;
int gh, min;
int z = 0;
int k = 1;

struct details
{
    char name[100], last_name[100], from[100], to[100], clas[100];
    int date, month, traveleers, back, bmonth;

} cod;

void oneway();
void twoway();
void list();
void payment(int gh, int min);
void edit();

fstream ptr;

int main()
{
    while (1)
    {
        ptr.open("DSAT.txt", ios::out);
        char a;
    p:
        printf("Hello User...!\n");
        printf("CHOOSE THE MODE OF YOUR FLIGHT:\n\n");
    hi:
        printf("\n      @: 1_Way\n      #: 2-Way\n\nEnter Character: ");
        scanf("%s", &a);

        if (a == '@')
        {
            oneway();
        }
        else if (a == '#')
        {
            twoway();
        }
        else
        {
            printf("\nWrong Choice Try Again...!\n");
            goto hi;
        }
        printf("Do you want to Book another flight?\n");
        printf("1.YES\n2.NO\nChoice: ");
        int u;
        scanf("%d", &u);
        if (u == 1)
        {
            goto p;
        }
        else if (u == 2)
        {
            printf("Thank You for travelling with us :)");
            break;
        }
    }
    ptr.close();
    return 0;
}

void oneway()
{
    char str[] = "Business Class", str2[] = "Economy Class";
    int ch;

    printf("\nWhat's Your First Name: ");
    scanf("%s", &cod.name);
    printf("\nWhat's Your Last Name: ");
    scanf("%s", &cod.last_name);
    printf("\nSelect the Date: ");
    scanf("%d", &cod.date);
    printf("\nWhich Month to Travel: ");
    scanf("%d", &cod.month);

    printf("\nWhat is your current location: ");
    scanf("%s", &cod.from);
    printf("\nWhere You Want to Go: ");
    scanf("%s", &cod.to);
here:

    printf("\nWhat About Your Comfort..?\n1: Business Class     2: Economy Class\n\nEnter Character: ");
    scanf("%d", &ch);

    if (ch == 1)
    {
        strcpy((cod.clas), str);
    }
    else if (ch == 2)
    {
        strcpy(cod.clas, str2);
    }
    else
    {
        printf("Wrong Choice TRy Again: ");
        goto here;
    }

    edit();
    return;
}

void twoway()
{
    char str[] = "Business Class", str2[] = "Economy Class";
    int ch;
    z++;
    printf("\nWhat's Your First Name: ");
    scanf("%s", &cod.name);
    printf("\nWhat's Your Last Name: ");
    scanf("%s", &cod.last_name);
    printf("\nSelect the Date: ");
    scanf("%d", &cod.date);
    printf("\nWhich Month to Travel: ");
    scanf("%d", &cod.month);
    printf("\nWhat is your returning date: ");
    scanf("%d", &cod.back);
    printf("\nWhat is your returning month: ");
    scanf("%d", &cod.bmonth);
    printf("\nWhat is your current location: ");
    scanf("%s", &cod.from);
    printf("\nWhere You Want to Go: ");
    scanf("%s", &cod.to);
here:

    printf("\nWhat About Your Comfort..?\n1: Business Class     2: Economy Class\n\nEnter Character: ");
    scanf("%d", &ch);

    if (ch == 1)
    {
        strcpy((cod.clas), str);
    }
    else if (ch == 2)
    {
        strcpy(cod.clas, str2);
    }
    else
    {
        printf("Wrong Choice TRy Again: ");
        goto here;
    }

    edit();
    return;
}

void list()
{
    int upper = 24, lower = 1, hour, minute, a, b, c, d, e, f, g, h, gh, min, high = 59, low = 10;
    srand(time(NULL));
    hour = (rand() % (upper - lower + 1)) + lower;
    minute = (rand() % (high - low + 1)) + low;
    a = (rand() % (upper - lower + 1)) + lower;
    b = (rand() % (high - low + 1)) + low;
    c = (rand() % (upper - lower + 1)) + lower;
    d = (rand() % (high - low + 1)) + low;
    e = (rand() % (upper - lower + 1)) + lower;
    f = (rand() % (high - low + 1)) + low;
    g = (rand() % (upper - lower + 1)) + lower;
    h = (rand() % (high - low + 1)) + low;
    printf("CHOOSE YOUR FLIGHT:-\n\n");
    int i = 1;
    printf("SEARCHING FLIGHTS SUITABLE FOR YOU........\n\n");
    printf("%d. GO FIRST       --------> %d:%d , PRICE : 6599\n", i++, hour, minute);

    printf("%d. AIR INDIA      --------> %d:%d , PRICE : 7500\n", i++, a, b);

    printf("%d. VISTARA        --------> %d:%d , PRICE : 8000\n", i++, c, d);

    printf("%d. KINGFISHER     --------> %d:%d , PRICE : 9000\n", i++, e, f);

    printf("%d. JSS            --------> %d:%d , PRICE : 12000\n", i++, g, h);
ja:
    printf("CHOICE: ");
    scanf("%d", &i);

    if (i == 1)
    {
        gh = hour;
        min = minute;
    }
    else if (i == 2)
    {
        gh = a;
        min = b;
    }
    else if (i == 3)
    {
        gh = c;
        min = d;
    }
    else if (i == 4)
    {
        gh = e;
        min = f;
    }
    else if (i == 5)
    {
        gh = g;
        min = h;
    }
    else
    {
        printf("\nYOU HAVE ENTERED WRONG CHOICE!!\n\n");
        goto ja;
    }
    payment(gh, min);
    return;
}

void payment(int gh, int min)
{
    long long int x, pnr, upper = 9999999999, lower = 2340260790;
    int n;
    char num[10];
    srand(time(NULL));
    pnr = (rand() % (upper - lower + 1)) + lower;

here:
    printf("Before continuing you need to agree to the following terms:-\n\n");
    printf("INSTRUCTIONS TO BE FOLLOWED BEFORE BOARDING :-\n");
    printf("1. Hand Baggage weight Should not exceed 7 kg and check in baggage weight should not exceed 12 kg.\n");
    printf("2. Please do not carry any sharp items in the flight.\n");
    printf("3. Make sure to carry a hard copy of ticket with you while boarding.\n");
    printf("4. Make sure to turn your mobile phone to flight mode inside the plane\n\n");
    printf("IMPORTANT DOCUMENTS REQUIRED:-\n");
    printf("1. Aadhar Card or any ID proof\n");
    printf("2. One passport size photo\n\n");
    printf("1. YES I AGREE TO THE FOLLOWING TERMS\n");
    printf("2. NO I DON'T AGREE TO THE FOLLOWING TERMS\n");
there:
    printf("Choice:- ");
    scanf("%d", &n);
    if (n == 2)
    {
        printf("PLEASE AGREE TO THE FOLLOWING TERMS BEFORE CONTINUING!!\n\n");
        goto here;
    }
    else if (n == 1)
    {
        printf("Please select the payment mode:-\n\n");
        printf("1. UPI\n");
        printf("2. PAYTM\n");
        printf("3. Credit card or Debit card\n\n");
        printf("Choice:- ");
        scanf("%d", &n);
        if (n == 1 || n == 2 || n == 3)
        {
            printf("Enter mobile number: ");
            scanf("%llu", &x);
            printf("Payment done successfully !!\n\n");
            printf("Your PNR number is %llu\n\n", pnr);
        }
        ptr << "FLIGHT TICKET " << k++ << " :-\n\n";
        ptr << "__________________Booking Details____________________\n";
        ptr << "                                                                                               \n";
        ptr << "  NAME : " << cod.name << " " << cod.last_name << "                                             MOBILE NUMBER : " << x << "        \n";
        ptr << "                                                                                               \n";
        ptr << "  FROM : " << cod.from << "\tTO: " << cod.to << "                                              PNR : " << pnr << "                  \n";
        ptr << "                                                                                               \n";
        ptr << "  CLASS : " << cod.clas << "                                               DATE :  " << cod.date << "/" << cod.month << "/2022                    \n";
        ptr << "                                                                                               \n";

        printf("FLIGHT TICKET :-\n\n");
        printf("__________________Booking Details____________________\n");
        printf("                                                                                               \n");
        printf("  NAME : %s %s                                             MOBILE NUMBER : %llu        \n", cod.name, cod.last_name, x);
        printf("                                                                                               \n");
        printf("  FROM : %s\tTO: %s                                              PNR : %llu                  \n", cod.from, cod.to, pnr);
        printf("                                                                                               \n");
        printf("  CLASS : %s                                               DATE :  %d/%d/2022                    \n", cod.clas, cod.date, cod.month);
        printf("                                                                                               \n");
        if (z == 1)
        {
            ptr << "  TIME :  " << gh << " : " << min << "                                                     RETURN DATE: " << cod.back << "/" << cod.bmonth << "/2022                      \n";
            printf("  TIME :  %d : %d                                                     RETURN DATE: %d/%d/2022                      \n", gh, min, cod.back, cod.bmonth);
        }
        else
        {
            ptr << "  TIME :  " << gh << " : " << min << "                                                                                 \n";
            printf("  TIME :  %d : %d                                                                                 \n", gh, min);
        }
        ptr << "____________________________________________\n\n";
        printf("____________________________________________\n\n");
        printf("YOUR FLIGHT HAS BEEN BOOKED SUCCESSFULLY :)\n\n");
        return;
    }
    else
    {
        printf("You have entered incorrect choice please select right one ......\n\n");
        goto there;
    }
}

void edit()
{
    char ch[100];
    int a, b, c;

    printf("\n--------------------Booking Details--------------------\n");
    printf("\nName: %s %s                   Date: %d/%d/2022\n\nFrom: %s    To: %s\n\nClass: %s", cod.name, cod.last_name, cod.date, cod.month, cod.from, cod.to, cod.clas);
    if (z == 1)
    {
        printf("   \tReturn Date : %d/%d/2022\n\n", cod.back, cod.month);
    }
    printf("\n--------------------------------------------------------\n");
    printf("Do You Want to Make Changes..?\n");
    printf("1.YES\n2.NO\n");
    printf("CHOICE: ");
    int y;
    scanf("%d", &y);
    if (y == 1)
    {

        printf("\n\nWhere You Want to Make the Change..?\n ");
        printf("1.Name\n2.Date\n3.Class\nChoice: ");
        int j;
        scanf("%d", &j);
        if (j == 1)
        {
            printf("What's Your New Name: ");
            scanf("%s", &cod.name);
            edit();
        }
        else if (j == 2)
        {
            printf("Select The New Date: ");
            scanf("%d", &cod.date);
            edit();
        }
        else if (j == 3)
        {
            printf("Select The New Class: ");
            scanf("%s", &cod.clas);
            edit();
        }
    }
    list();
    return;
}
