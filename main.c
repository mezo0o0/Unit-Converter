#include <stdio.h>
#include <stdlib.h>

int choice ;
double value ;

void main(void)
{
    char c[3];
    int again=1;
    do {

    system("cls"); //clear the screen

    printf("\t\t\t\t\t\t########################\n");
    printf("\t\t\t\t\t\t###                  ###\n");
    printf("\t\t\t\t\t\t###  UNIT CONVERTER  ###\n");
    printf("\t\t\t\t\t\t###                  ###\n");
    printf("\t\t\t\t\t\t########################\n\n");

    printf("\n~~~> Select the quantity to be converted:\n\n");
    printf("1.  Angle\n");
    printf("2.  Angular Speed\n");
    printf("3.  Area\n");
    printf("4.  Energy\n");
    printf("5.  Length\n");
    printf("6.  Mass\n");
    printf("7.  Power\n");
    printf("8.  Pressure\n");
    printf("9.  SI Prefixes\n");
    printf("10. Speed\n");
    printf("11. Temperature\n");
    printf("12. Time\n");
    printf("13. Volume\n");

    printf("\n>> Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            system("cls");
            Angle();
            break;
        case 2:
            system("cls");
            Angular_Speed();
            break;
        case 3:
            system("cls");
            Area();
            break;
        case 4:
            system("cls");
            Energy();
            break;
        case 5:
            system("cls");
            length();
            break;
        case 6:
            system("cls");
            Mass();
            break;
        case 7:
            system("cls");
            Power();
            break;
        case 8:
            system("cls");
            Pressure();
            break;
        case 9:
            system("cls");
            SI_Prefixes();
            break;
        case 10:
            system("cls");
            Speed();
            break;
        case 11:
            system("cls");
            Temperature();
            break;
        case 12:
            system("cls");
            Time();
            break;
        case 13:
            system("cls");
            Volume();
            break;
        default:
            printf("\nInvalid choice, try again.\n");
            break;
    }
      printf("\nIf you want to try again, enter (1) : ");

      scanf("%s", &c);
      if (strcmp(c, "1") == 0)
      {
          again = 1;
      }
      else
      {
          again=0;
      }


        } while (again==1);
}

void Angle() {

    system("cls");

    printf("\t\t\t\t\t\t####################\n");
    printf("\t\t\t\t\t\t# Angle Conversion #\n");
    printf("\t\t\t\t\t\t####################");

    printf("\n\n~~~> Select the unit conversion from and to:\n\n");
    printf("1. Degrees   to radians\n");
    printf("2. Radians   to degrees\n\n");
    printf("3. Degrees   to gradians\n");
    printf("4. Gradians  to degrees\n\n");
    printf("5. Radians   to gradians\n");
    printf("6. Gradians  to radians\n\n");
    printf("7. Return to main menu\n");

    printf("\n>> Enter your choice: ");
    scanf("%d", &choice);


    switch (choice) {
        case 1:
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            printf("\n\n%.3lf degrees = %.5lf radians\n\n", value, value * (22.0/7.0) / 180.0);
            break;
        case 2:
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            printf("\n\n%.3lf radians = %.5lf degrees\n\n", value, value * 180.0 / ((22.0/7.0)));
            break;
        case 3:
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            printf("\n\n%.3lf degrees = %.5lf gradians\n\n", value, value * 10.0 / 9.0);
            break;
        case 4:
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            printf("\n\n%.3lf gradians = %.5lf degrees\n\n", value, value * 9.0 / 10.0);
            break;
        case 5:
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            printf("\n\n%.3lf radians = %.5lf gradians\n\n", value, value * 200.0 / (22.0/7.0));
            break;
        case 6:
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            printf("\n\n%.3lf gradians = %.5lf radians\n\n", value, value * (22.0/7.0) / 200.0);
            break;
        case 7:
            return main();
        default:
            printf("\n\nInvalid choice, try again......\n\n");
                sleep(3);
                return Angle();
    }
}

void Angular_Speed() {

        system("cls");

        printf("\t\t\t\t\t\t############################\n");
        printf("\t\t\t\t\t\t# Angular Speed Conversion #\n");
        printf("\t\t\t\t\t\t############################");

        printf("\n\n~~~> Select the unit conversion from and to:\n\n");
        printf("1. rad/s  to  rpm\n");
        printf("2. rpm    to  rad/s\n\n");
        printf("3. return to main menu\n");
        printf("\n>> Enter your choice: ");
        scanf("%d", &choice);



        switch (choice) {
            case 1:
                printf("\n\n>> Enter the value: ");
                scanf("%lf", &value);
                printf("\n\n%.3lf rad/s  =  %.5lf rpm\n\n", value, (value * (3.14159 / 30.0)));
                break;
            case 2:
                printf("\n\n>> Enter the value: ");
                scanf("%lf", &value);
                printf("\n\n%.3lf rpm  =  %.5lf rad/s\n\n", value, (value * (30.0 / 3.14159)));
                break;
            case 3:
                return main();
            default:
                printf("\n\nInvalid choice, try again......\n\n");
                sleep(3);
                return Angular_Speed();
    }
}

void Area() {

    system("cls");

    printf("\t\t\t\t\t\t###################\n");
    printf("\t\t\t\t\t\t# Area Conversion #\n");
    printf("\t\t\t\t\t\t###################");

    printf("\n\n~~~> Select the unit conversion from and to:\n\n");

    printf("1. Square inches       to square centimeters\n");
    printf("2. Square centimeters  to square inches\n\n");

    printf("3. Square feet         to square meters\n");
    printf("4. Square meters       to square feet\n\n");

    printf("5. Square miles        to square kilometers\n");
    printf("6. Square kilometers   to square miles\n\n");

    printf("7. Hectares            to acres\n");
    printf("8. Acres               to hectares\n\n");
    printf("9. Return to main menu \n");

    printf("\n>> Enter your choice: ");
    scanf("%d", &choice);



    switch (choice) {
        case 1:
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            value =  abs(value);
            printf("\n\n%.3lf square inches = %.5lf square centimeters\n\n", value, value * 6.45);
            break;
        case 2:
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            value =  abs(value);
            printf("\n\n%.3lf square centimeters = %.5lf square inches\n\n", value, value * 0.16);
            break;
        case 3:
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            value =  abs(value);
            printf("\n\n%.3lf square feet = %.5lf square meters\n\n", value, value * 0.09);
            break;
        case 4:
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            value =  abs(value);
            printf("\n\n%.3lf square meters = %.5lf square feet\n\n", value, value * 10.76);
            break;
        case 5:
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            value =  abs(value);
            printf("\n\n%.3lf square miles = %.5lf square kilometers\n", value, value * 2.59);
            break;
        case 6:
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            value =  abs(value);
            printf("\n\n%.3lf square kilometers = %.5lf square miles\n\n", value, value * 0.39);
            break;
        case 7:
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            value =  abs(value);
            printf("\n\n%.3lf hectares = %.5lf acres\n\n", value, value * 2.47);
            break;
        case 8:
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            value =  abs(value);
            printf("\n\n%.3lf acres = %.5lf hectares\n\n", value, value * 0.40);
            break;
        case 9 :
            return main();
        default:
            printf("\n\nInvalid choice, try again.....\n\n");
            sleep(3);
            return Area();
    }
}

void Energy() {

    system("cls");

    printf("\t\t\t\t\t\t#####################\n");
    printf("\t\t\t\t\t\t# Energy Conversion #\n");
    printf("\t\t\t\t\t\t#####################");

    printf("\n\n~~~> Select the unit conversion from and to:\n\n");

    printf("1.  Joule to cal\n");
    printf("2.  Cal   to joule\n\n");

    printf("3.  Joule to BTU\n");
    printf("4.  BTU   to joule\n\n");

    printf("5.  Joule to kWh\n");
    printf("6.  KWh   to Joule\n\n");

    printf("7.  Cal   to BTU\n");
    printf("8.  BTU   to cal\n\n");

    printf("9.  Cal   to kWh\n");
    printf("10. KWh   to cal\n\n");

    printf("11. BTU   to kWh\n");
    printf("12. KWh   to BTU\n\n");
    printf("13. Return to main menu\n");


    printf("\n>> Enter your choice: ");
    scanf("%d",&choice);


    switch(choice)
    {
        case (1):
            printf("\n\n>> Enter the value: ");
            scanf("%lf",&value);
            printf("\n\n%.3lf joule = %.3lf cal\n\n",value,value*0.239005736);
            break;

        case (2):
            printf("\n\n>> Enter the value: ");
            scanf("%lf",&value);
            printf("\n\n%.3lf cal = %.3lf joule\n\n",value , value*4.18400);
            break;

        case (3):
            printf("\n\n>> Enter the value: ");
            scanf("%lf",&value);
            printf("\n\n%.3lf joule = %.4lf BTU\n",value , value*0.00094781712);
            break;

        case (4):
            printf("\n\n>> Enter the value: ");
            scanf("%lf",&value);
            printf("\n\n%.3lf BTU = %.3lf joule\n\n",value ,value*1055.056);
            break;

        case (5):
            printf("\n\n>> Enter the value: ");
            scanf("%lf",&value);
            printf("\n\n%.3lf joule = %.8lf kWh\n\n",value ,value*0.0000002778);
            break;

        case (6):
            printf("\n\n>> Enter the value: ");
            scanf("%lf",&value);
            printf("\n\n%.3lf kWh = %.3lf joule\n\n",value ,value*3600000);
            break;

        case (7):
            printf("\n\n>> Enter the value: ");
            scanf("%lf",&value);
            printf("\n\n%.3lf cal = %.5lf BTU\n\n",value ,value*0.0039657);
            break;

        case (8):
            printf("\n\n>> Enter the value: ");
            scanf("%lf",&value);
            printf("\n\n%.3lf BTU = %.3lf cal\n\n",value ,value*252.164);
            break;

        case (9):
            printf("\n\n>> Enter the value: ");
            scanf("%lf",&value);
            printf("\n\n%.3lf cal = %.5lf kWh\n\n",value ,value*0.0011623);
            break;

        case (10):
            printf("\n\n>> Enter the value: ");
            scanf("%lf",&value);
            printf("\n\n%.3lf kWh = %.3lf cal\n\n",value ,value*860420.65);
            break;

        case (11):
            printf("\n\n>> Enter the value: ");
            scanf("%lf",&value);
            printf("\n\n%.3lf BTU = %.5lf kWh\n\n",value ,value*0.00029307);
            break;

        case (12):
            printf("\n\n>> Enter the value: ");
            scanf("%lf",&value);
            printf("\n\n%.3lf kWh = %.3lf BTU\n\n",value ,value*3412.142);
            break;
        case 13:
            return main();

        default :
            printf("\n\nInvalid choice, try again......\n\n");
            sleep(3);
            return Energy();
    }
}

void length() {

    system("cls");

    printf("\t\t\t\t\t\t#####################\n");
    printf("\t\t\t\t\t\t# Length Conversion #\n");
    printf("\t\t\t\t\t\t#####################");

    printf("\n\n~~~> Select the unit conversion from and to:\n\n");

    printf("1.  Meters  to inches\n");
    printf("2.  Inches  to meters\n\n");

    printf("3.  Meters  to feet\n");
    printf("4.  Feet    to meters\n\n");

    printf("5.  Meters  to cm\n");
    printf("6.  cm      to meters\n\n");

    printf("7.  km      to meters\n");
    printf("8.  Meters  to km\n\n");

    printf("9.  km      to miles\n");
    printf("10. Miles   to km\n\n");

    printf("11. Feet    to inches\n");
    printf("12. Inches  to feet\n\n");
    printf("13. Return to main menu\n");

    printf("\n>> Enter your choice: ");
    scanf("%d", &choice);



    switch(choice){
    case 1:
         printf("\n\n>> Enter the value: ");
         scanf("%lf", &value);
         value =  abs(value);
         printf("\n\nConversion result = %.2lf in\n\n", value * 39.4);
         break;
    case 2:
         printf("\n\n>> Enter the value: ");
         scanf("%lf", &value);
         value =  abs(value);
         printf("\n\nConversion result = %.2lf m\n\n", value / 39.4);
         break;
    case 3:
         printf("\n\n>> Enter the value: ");
         scanf("%lf", &value);
         value =  abs(value);
         printf("\n\nConversion result = %.2lf ft\n\n", value * 3.28);
         break;
    case 4:
         printf("\n\n>> Enter the value: ");
         scanf("%lf", &value);
         value =  abs(value);
         printf("\n\nConversion result = %.2lf m\n\n", value / 3.28);
         break;
    case 5:
         printf("\n\n>> Enter the value: ");
         scanf("%lf", &value);
         value =  abs(value);
         printf("\n\nConversion result = %.2lf cm\n\n", value * 100);
         break;
    case 6:
         printf("\n\n>> Enter the value: ");
         scanf("%lf", &value);
         value =  abs(value);
         printf("\n\nConversion result = %.2lf m\n\n", value / 100);
         break;
    case 7:
         printf("\n\n>> Enter the value: ");
         scanf("%lf", &value);
         value =  abs(value);
         printf("\n\nConversion result = %.2lf m\n\n", value * 1000);
         break;
    case 8:
         printf("\n\n>> Enter the value: ");
         scanf("%lf", &value);
         value =  abs(value);
         printf("\n\nConversion result = %.2lf km\n\n", value / 1000);
         break;
    case 9:
         printf("\n\n>> Enter the value: ");
         scanf("%lf", &value);
         value =  abs(value);
         printf("\n\nConversion result = %.2lf miles\n\n", value / 1.609344);
         break;
    case 10:
         printf("\n\n>> Enter the value: ");
         scanf("%lf", &value);
         value =  abs(value);
         printf("\n\nConversion result = %.2lf km\n\n", value * 1.609344);
         break;
    case 11:
         printf("\n\n>> Enter the value: ");
         scanf("%lf", &value);
         value =  abs(value);
         printf("\n\nConversion result = %.2lf in\n\n", value * 12);
         break;
    case 12:
         printf("\n\n>> Enter the value: ");
         scanf("%lf", &value);
         value =  abs(value);
         printf("\n\nConversion result = %.2lf ft\n\n", value / 12);
         break;
    case 13:
         return main();
    default:
         printf("\n\nInvalid choice, try again........\n\n");
            sleep(3);
            return length();

    }

}

void Mass() {
    system("cls");
    printf("\t\t\t\t\t\t###################\n");
    printf("\t\t\t\t\t\t# Mass Conversion #\n");
    printf("\t\t\t\t\t\t###################");

    printf("\n\n~~~> Select the unit conversion from and to:\n\n");

    printf("1. Kilograms (kg) to  Pounds    (lb)\n");
    printf("2. Pounds    (lb) to  Kilograms (kg)\n\n");
    printf("3. Kilograms (kg) to  Ounces    (oz)\n");
    printf("4. Ounces    (oz) to  Kilograms (kg)\n\n");
    printf("5. Pounds    (lb) to  Ounces    (oz)\n");
    printf("6. Ounces    (oz) to  Pounds    (lb)\n\n");
    printf("7. Ounces    (oz) to  grams     (g)\n");
    printf("8. Grams     (g)  to  Ounces    (oz)\n\n");
    printf("9. Return to main menu\n");

    printf("\n>> Enter your choice: ");
    scanf("%d", &choice);



  switch (choice) {
    case 1:
        printf("\n\n>> Enter the value: ");
        scanf("%lf", &value);
        value =  abs(value);
      printf("\n\nThe Result = %.3lf lb\n\n",  value * 60);
      break;
    case 2:
        printf("\n\n>> Enter the value: ");
        scanf("%lf", &value);
        value =  abs(value);
      printf("\n\nThe Result = %.3lf kg\n\n",  value /60);
      break;
    case 3:
        printf("\n\n>> Enter the value: ");
        scanf("%lf", &value);
        value =  abs(value);
      printf("\n\nThe Result = %.3lf oz\n\n",  value *35.27396);
      break;
    case 4:
        printf("\n\n>> Enter the value: ");
        scanf("%lf", &value);
        value =  abs(value);
      printf("\n\nThe Result = %.3lf kg\n\n",  value /35.27396);
      break;
    case 5:
        printf("\n\n>> Enter the value: ");
        scanf("%lf", &value);
        value =  abs(value);
      printf("\n\nThe Result = %.3lf oz\n\n",  value * 16);
      break;
    case 6:
        printf("\n\n>> Enter the value: ");
        scanf("%lf", &value);
        value =  abs(value);
      printf("\n\nThe Result = %.3lf lb\n\n",  value / 16);
      break;
    case 7:
        printf("\n\n>> Enter the value: ");
        scanf("%lf", &value);
        value =  abs(value);
      printf("\n\nThe Result = %.3lf g\n\n",  value *  28.3495);
      break;
    case 8:
        printf("\n\n>> Enter the value: ");
        scanf("%lf", &value);
        value =  abs(value);
      printf("\n\nThe Result = %.3lf oz\n\n",  value / 28.3495);
      break;
    case 9:
        return main();
    default:
      printf("\n\nInvalid choice, try again.......\n\n");
      sleep(3);
      return Mass();
  }
}

void Power() {
    system("cls");

    printf("\t\t\t\t\t\t####################\n");
    printf("\t\t\t\t\t\t# Power Conversion #\n");
    printf("\t\t\t\t\t\t####################");

    printf("\n\n~~~> Select the unit conversion from and to:\n\n");
    printf("1. Watts      to horsepower\n");
    printf("2. Horsepower to watts\n\n");
    printf("3. Return to main menu\n");

    printf("\n>> Enter your choice: ");
    scanf("%d", &choice);



    switch (choice) {
        case 1:
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            printf("\n\n%.3lf watts = %.6lf horsepower\n", value, (value * 0.00134102));
            break;
        case 2:
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            printf("\n\n%.3lf horsepower = %.5lf watts\n", value, (value * 745.7));
            break;
        case 3:
            return main();
        default:
            printf("\n\nInvalid choice, try again.......\n\n");
            sleep(3);
            return Power();
    }
}

void Pressure() {
    system("cls");

    printf("\t\t\t\t\t\t#######################\n");
    printf("\t\t\t\t\t\t# Pressure Conversion #\n");
    printf("\t\t\t\t\t\t#######################");

    printf("\n\n~~~> Select the unit conversion from and to:\n\n");

    printf("1.  kPa  to atm\n");
    printf("2.  atm  to kPa\n\n");

    printf("3.  kPa  to torr\n");
    printf("4.  torr to kPa\n\n");

    printf("5.  kPa  to bar\n");
    printf("6.  bar  to kPa\n\n");

    printf("7.  atm  to torr\n");
    printf("8.  torr to atm\n\n");

    printf("9.  atm  to bar\n");
    printf("10. bar  to atm\n\n");

    printf("11. torr to bar\n");
    printf("12. bar  to Torr\n\n");
    printf("13. Return to main menu\n");

    printf("\n>> Enter your choice: ");
    scanf("%d",&choice);




    switch (choice)
         {
            case(1):
                printf("\n\n>> Enter the value: ");
                scanf("%lf",&value);
                value =  abs(value);
                printf("\n\n%.3lf kPa = %.5lf atm\n\n", value, value*0.00986923267);
                break;

            case(2):
                printf("\n\n>> Enter the value: ");
                scanf("%lf",&value);
                value =  abs(value);
                 printf("\n\n%.3lf atm = %.3lf kPa\n\n", value, value*101.325 );
                 break;

            case(3):
                printf("\n\n>> Enter the value: ");
                scanf("%lf",&value);
                value =  abs(value);
                printf("\n\n%.3lf kPa  %.3lf torr\n\n", value, value*7.50061682 );
                break;

            case(4):printf("\n\n>> Enter the value: ");
                scanf("%lf",&value);
                value =  abs(value);
                printf("\n\n%.3lf torr = %.3lf kpa\n\n", value, value*.13333 );
                break;

            case(5):
                printf("\n\n>> Enter the value: ");
                scanf("%lf",&value);
                value =  abs(value);
                printf("\n\n%.3lf kPa = %.3lf bar\n\n", value, value*.01);
                break;

            case(6):
                printf("\n\n>> Enter the value: ");
                scanf("%lf",&value);
                value =  abs(value);
                printf("\n\n%.3lf bar = %.3lf kPa\n\n", value, value*100);
                break;

            case(7):
                printf("\n\n>> Enter the value: ");
                scanf("%lf",&value);
                value =  abs(value);
                printf("\n\n%.3lf atm = %.3lf torr\n\n", value, value*760);
                break;

            case(8):
                printf("\n\n>> Enter the value: ");
                scanf("%lf",&value);
                value =  abs(value);
                printf("\n\n%.3lf torr = %.3lf atm\n\n", value, value*0.0013157);
                break;

            case(9):
                printf("\n\n>> Enter the value: ");
                scanf("%lf",&value);
                value =  abs(value);
                printf("\n\n%.3lf atm = %.3lf bar\n\n", value, value*1.01325);
                break;

            case(10):
                printf("\n\n>> Enter the value: ");
                scanf("%lf",&value);
                value =  abs(value);
                printf("\n\n%.3lf bar = %.3lf atm\n\n", value, value*.98692);
                break;

            case(11):
                printf("\n\n>> Enter the value: ");
                scanf("%lf",&value);
                value =  abs(value);
                printf("\n\n%.3lf torr = %.3lf bar\n\n", value, value*0.00133322368);
                break;

            case(12):
                printf("\n\n>> Enter the value: ");
                scanf("%lf",&value);
                value =  abs(value);
                printf("\n\n%.3lf bar = %.3lf torr\n\n", value, value*750.062);
                break;
            case (13):
                return main();
            default :
                printf("\n\nInvalid choice, try again......\n\n");
                sleep(3);
                return Pressure();
            }
}

void SI_Prefixes() {
    system("cls");

    printf("\t\t\t\t\t\t##########################\n");
    printf("\t\t\t\t\t\t# SI Prefixes Conversion #\n");
    printf("\t\t\t\t\t\t##########################");

    printf("\n\n~~~> Select the SI prefix conversion:\n\n");
    printf("1.  Femto      [10^-15] (f)\n");
    printf("2.  Pico       [10^-12] (p)\n");
    printf("3.  Nano       [10^-9]  (n)\n");
    printf("4.  Micro      [10^-6]  (µ)\n");
    printf("5.  Milli      [10^-3]  (m)\n");
    printf("6.  Centi      [10^-2]  (c)\n");
    printf("7.  Deci       [10^-1]  (d)\n");
    printf("8.  Basic Unit [10^0]   (-)\n");
    printf("9.  Deka       [10^1]   (da)\n");
    printf("10. Hecto      [10^2]   (h)\n");
    printf("11. Kilo       [10^3]   (k)\n");
    printf("12. Mega       [10^6]   (M)\n");
    printf("13. Giga       [10^9]   (G)\n");
    printf("14. Tera       [10^12]  (T)\n");
    printf("15. Peta       [10^15]  (P)\n\n");
    printf("16. Return main menu\n");

    printf("\n>> Enter your choice: ");
    scanf("%d", &choice);



    switch (choice) {
        case 1:
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            printf("\n\n%.3lf f = %.6lf p\n", value, value * 1e-3);
            printf("%.3lf f = %.9lf n\n", value, value * 1e-6);
            printf("%.3lf f = %.12lf µ\n", value, value * 1e-9);
            printf("%.3lf f = %.15lf m\n", value, value * 1e-12);
            printf("%.3lf f = %.16lf c\n", value, value * 1e-13);
            printf("%.3lf f = %.17lf d\n", value, value * 1e-14);
            printf("%.3lf f = %.18lf basic unit\n", value, value * 1e-15);
            printf("%.3lf f = %.19lf da\n", value, value * 1e-16);
            printf("%.3lf f = %.20lf h\n", value, value * 1e-17);
            printf("%.3lf f = %.21lf k\n", value, value * 1e-18);
            printf("%.3lf f = %.24lf M\n", value, value * 1e-21);
            printf("%.3lf f = %.27lf G\n", value, value * 1e-24);
            printf("%.3lf f = %.30lf T\n", value, value * 1e-27);
            printf("%.3lf f = %.33lf P\n\n", value, value * 1e-30);
            break;
        case 2:
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            printf("\n\n%.3lf p = %.3lf f\n", value, value * 1e3);
            printf("%.3lf p = %.6lf n\n", value, value * 1e-3);
            printf("%.3lf p = %.9lf µ\n", value, value * 1e-6);
            printf("%.3lf p = %.12lf m\n", value, value * 1e-9);
            printf("%.3lf p = %.13lf c\n", value, value * 1e-10);
            printf("%.3lf p = %.14lf d\n", value, value * 1e-11);
            printf("%.3lf p = %.15lf basic unit\n", value, value * 1e-12);
            printf("%.3lf p = %.16lf da\n", value, value * 1e-13);
            printf("%.3lf p = %.17lf h\n", value, value * 1e-14);
            printf("%.3lf p = %.18lf k\n", value, value * 1e-15);
            printf("%.3lf p = %.21lf M\n", value, value * 1e-18);
            printf("%.3lf p = %.24lf G\n", value, value * 1e-21);
            printf("%.3lf p = %.27lf T\n", value, value * 1e-24);
            printf("%.3lf p = %.30lf P\n\n", value, value * 1e-27);
            break;
        case 3:
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            printf("\n\n%.3lf n = %.3lf f\n\n", value, value * 1e6);
            printf("%.3lf n = %.3lf p\n", value, value * 1e3);
            printf("%.3lf n = %.6lf µ\n", value, value * 1e-3);
            printf("%.3lf n = %.9lf m\n", value, value * 1e-6);
            printf("%.3lf n = %.10lf c\n", value, value * 1e-7);
            printf("%.3lf n = %.11lf d\n", value, value * 1e-8);
            printf("%.3lf n = %.12lf basic unit\n", value, value * 1e-9);
            printf("%.3lf n = %.13lf da\n", value, value * 1e-10);
            printf("%.3lf n = %.14lf h\n", value, value * 1e-11);
            printf("%.3lf n = %.15lf k\n", value, value * 1e-12);
            printf("%.3lf n = %.18lf M\n", value, value * 1e-15);
            printf("%.3lf n = %.21lf G\n", value, value * 1e-18);
            printf("%.3lf n = %.24lf T\n", value, value * 1e-21);
            printf("%.3lf n = %.27lf P\n\n", value, value * 1e-24);
            break;
        case 4:
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            printf("\n\n%.3lf µ = %.3lf f\n\n", value, value * 1e9);
            printf("%.3lf µ = %.3lf p\n\n", value, value * 1e6);
            printf("%.3lf µ = %.3lf n\n\n", value, value * 1e3);
            printf("%.3lf µ = %.6lf m\n\n", value, value * 1e-3);
            printf("%.3lf µ = %.7lf c\n\n", value, value * 1e-4);
            printf("%.3lf µ = %.8lf d\n\n", value, value * 1e-5);
            printf("%.3lf µ = %.9lf basic unit\n\n", value, value * 1e-6);
            printf("%.3lf µ = %.10lf da\n\n", value, value * 1e-7);
            printf("%.3lf µ = %.11lf h\n\n", value, value * 1e-8);
            printf("%.3lf µ = %.12lf k\n\n", value, value * 1e-9);
            printf("%.3lf µ = %.15lf M\n\n", value, value * 1e-12);
            printf("%.3lf µ = %.18lf G\n\n", value, value * 1e-15);
            printf("%.3lf µ = %.21lf T\n\n", value, value * 1e-18);
            printf("%.3lf µ = %.24lf P\n\n\n", value, value * 1e-21);
            break;
        case 5:
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            printf("\n\n%.3lf m = %.3lf f\n", value, value * 1e12);
            printf("%.3lf m = %.3lf p\n", value, value * 1e9);
            printf("%.3lf m = %.3lf n\n", value, value * 1e6);
            printf("%.3lf m = %.3lf µ\n", value, value * 1e3);
            printf("%.3lf m = %.4lf c\n", value, value * 1e-1);
            printf("%.3lf m = %.5lf d\n", value, value * 1e-2);
            printf("%.3lf m = %.6lf basic unit\n", value, value * 1e-3);
            printf("%.3lf m = %.7lf da\n", value, value * 1e-4);
            printf("%.3lf m = %.8lf h\n", value, value * 1e-5);
            printf("%.3lf m = %.9lf k\n", value, value * 1e-6);
            printf("%.3lf m = %.12lf M\n", value, value * 1e-9);
            printf("%.3lf m = %.15lf G\n", value, value * 1e-12);
            printf("%.3lf m = %.18lf T\n", value, value * 1e-15);
            printf("%.3lf m = %.21lf P\n\n", value, value * 1e-18);
            break;
        case 6:
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            printf("\n\n%.3lf c = %.3lf f\n", value, value * 1e13);
            printf("%.3lf c = %.3lf p\n", value, value * 1e10);
            printf("%.3lf c = %.3lf n\n", value, value * 1e7);
            printf("%.3lf c = %.3lf µ\n", value, value * 1e4);
            printf("%.3lf c = %.3lf m\n", value, value * 1e1);
            printf("%.3lf c = %.4lf d\n", value, value * 1e-1);
            printf("%.3lf c = %.5lf basic unit\n", value, value * 1e-2);
            printf("%.3lf c = %.6lf da\n", value, value * 1e-3);
            printf("%.3lf c = %.7lf h\n", value, value * 1e-4);
            printf("%.3lf c = %.8lf k\n", value, value * 1e-5);
            printf("%.3lf c = %.11lf M\n", value, value * 1e-8);
            printf("%.3lf c = %.14lf G\n", value, value * 1e-11);
            printf("%.3lf c = %.17lf T\n", value, value * 1e-14);
            printf("%.3lf c = %.20lf P\n\n", value, value * 1e-17);
            break;
        case 7:
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            printf("\n\n%.3lf d = %.3lf f\n", value, value * 1e14);
            printf("%.3lf d = %.3lf p\n", value, value * 1e11);
            printf("%.3lf d = %.3lf n\n", value, value * 1e8);
            printf("%.3lf d = %.3lf µ\n", value, value * 1e5);
            printf("%.3lf d = %.3lf m\n", value, value * 1e2);
            printf("%.3lf d = %.3lf c\n", value, value * 1e1);
            printf("%.3lf d = %.4lf basic unit\n", value, value * 1e-1);
            printf("%.3lf d = %.5lf da\n", value, value * 1e-2);
            printf("%.3lf d = %.6lf h\n", value, value * 1e-3);
            printf("%.3lf d = %.7lf k\n", value, value * 1e-4);
            printf("%.3lf d = %.10lf M\n", value, value * 1e-7);
            printf("%.3lf d = %.13lf G\n", value, value * 1e-10);
            printf("%.3lf d = %.16lf T\n", value, value * 1e-13);
            printf("%.3lf d = %.19lf P\n\n", value, value * 1e-16);
        case 8:
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            printf("\n\n%.3lf basic unit = %.3lf f\n", value, value * 1e15);
            printf("%.3lf basic unit = %.3lf p\n", value, value * 1e12);
            printf("%.3lf basic unit = %.3lf n\n", value, value * 1e9);
            printf("%.3lf basic unit = %.3lf µ\n", value, value * 1e6);
            printf("%.3lf basic unit = %.3lf m\n", value, value * 1e3);
            printf("%.3lf basic unit = %.3lf c\n", value, value * 1e2);
            printf("%.3lf basic unit = %.3lf d\n", value, value * 1e1);
            printf("%.3lf basic unit = %.4lf da\n", value, value * 1e-1);
            printf("%.3lf basic unit = %.5lf h\n", value, value * 1e-2);
            printf("%.3lf basic unit = %.6lf k\n", value, value * 1e-3);
            printf("%.3lf basic unit = %.9lf M\n", value, value * 1e-6);
            printf("%.3lf basic unit = %.12lf G\n", value, value * 1e-9);
            printf("%.3lf basic unit = %.15lf T\n", value, value * 1e-12);
            printf("%.3lf basic unit = %.18lf P\n\n", value, value * 1e-15);
            break;
        case 9:
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            printf("\n\n%.3lf da = %.3lf f\n", value, value * 1e16);
            printf("%.3lf da = %.3lf p\n", value, value * 1e13);
            printf("%.3lf da = %.3lf n\n", value, value * 1e10);
            printf("%.3lf da = %.3lf µ\n", value, value * 1e7);
            printf("%.3lf da = %.3lf m\n", value, value * 1e4);
            printf("%.3lf da = %.3lf c\n", value, value * 1e3);
            printf("%.3lf da = %.3lf d\n", value, value * 1e2);
            printf("%.3lf da = %.3lf basic unit\n", value, value * 1e1);
            printf("%.3lf da = %.4lf h\n", value, value * 1e-1);
            printf("%.3lf da = %.5lf k\n", value, value * 1e-2);
            printf("%.3lf da = %.8lf M\n", value, value * 1e-5);
            printf("%.3lf da = %.11lf G\n", value, value * 1e-8);
            printf("%.3lf da = %.14lf T\n", value, value * 1e-11);
            printf("%.3lf da = %.17lf P\n\n", value, value * 1e-14);
            break;
        case 10:
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            printf("\n\n%.3lf h = %.3lf f\n", value, value * 1e17);
            printf("%.3lf h = %.3lf p\n", value, value * 1e14);
            printf("%.3lf h = %.3lf n\n", value, value * 1e-11);
            printf("%.3lf h = %.3lf µ\n", value, value * 1e8);
            printf("%.3lf h = %.3lf m\n", value, value * 1e5);
            printf("%.3lf h = %.3lf c\n", value, value * 1e4);
            printf("%.3lf h = %.3lf d\n", value, value * 1e3);
            printf("%.3lf h = %.3lf basic unit\n", value, value * 1e2);
            printf("%.3lf h = %.3lf da\n", value, value * 1e1);
            printf("%.3lf h = %.4lf k\n", value, value * 1e-1);
            printf("%.3lf h = %.7lf M\n", value, value * 1e-4);
            printf("%.3lf h = %.10lf G\n", value, value * 1e-7);
            printf("%.3lf h = %.13lf T\n", value, value * 1e-10);
            printf("%.3lf h = %.16lf P\n\n", value, value * 1e-13);
            break;
        case 11:
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            printf("\n\n%.3lf k = %.3lf f\n", value, value * 1e18);
            printf("%.3lf k = %.3lf p\n", value, value * 1e15);
            printf("%.3lf k = %.3lf n\n", value, value * 1e12);
            printf("%.3lf k = %.3lf µ\n", value, value * 1e9);
            printf("%.3lf k = %.3lf m\n", value, value * 1e6);
            printf("%.3lf k = %.3lf c\n", value, value * 1e5);
            printf("%.3lf k = %.3lf d\n", value, value * 1e4);
            printf("%.3lf k = %.3lf basic unit\n", value, value * 1e3);
            printf("%.3lf k = %.3lf da\n", value, value * 1e2);
            printf("%.3lf k = %.3lf h\n", value, value * 1e1);
            printf("%.3lf k = %.6lf M\n", value, value * 1e-3);
            printf("%.3lf k = %.9lf G\n", value, value * 1e-6);
            printf("%.3lf k = %.12lf T\n", value, value * 1e-9);
            printf("%.3lf k = %.15lf P\n\n", value, value * 1e-12);
            break;
        case 12:
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            printf("\n\n%.3lf M = %.3lf f\n", value, value * 1e21);
            printf("%.3lf M = %.3lf p\n", value, value * 1e18);
            printf("%.3lf M = %.3lf n\n", value, value * 1e15);
            printf("%.3lf M = %.3lf µ\n", value, value * 1e12);
            printf("%.3lf M = %.3lf m\n", value, value * 1e9);
            printf("%.3lf M = %.3lf c\n", value, value * 1e8);
            printf("%.3lf M = %.3lf d\n", value, value * 1e7);
            printf("%.3lf M = %.3lf basic unit\n", value, value * 1e6);
            printf("%.3lf M = %.3lf da\n", value, value * 1e5);
            printf("%.3lf M = %.3lf h\n", value, value * 1e4);
            printf("%.3lf M = %.3lf k\n", value, value * 1e3);
            printf("%.3lf M = %.6lf G\n", value, value * 1e-3);
            printf("%.3lf M = %.9lf T\n", value, value * 1e-6);
            printf("%.3lf M = %.12lf P\n\n", value, value * 1e-9);
            break;
        case 13:
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            printf("\n\n%.3lf G = %.3lf f\n", value, value * 1e24);
            printf("%.3lf G = %.3lf p\n", value, value * 1e21);
            printf("%.3lf G = %.3lf n\n", value, value * 1e18);
            printf("%.3lf G = %.3lf µ\n", value, value * 1e15);
            printf("%.3lf G = %.3lf m\n", value, value * 1e12);
            printf("%.3lf G = %.3lf c\n", value, value * 1e11);
            printf("%.3lf G = %.3lf d\n", value, value * 1e10);
            printf("%.3lf G = %.3lf basic unit\n", value, value * 1e9);
            printf("%.3lf G = %.3lf da\n", value, value * 1e8);
            printf("%.3lf G = %.3lf h\n", value, value * 1e7);
            printf("%.3lf G = %.3lf k\n", value, value * 1e6);
            printf("%.3lf G = %.3lf M\n", value, value * 1e3);
            printf("%.3lf G = %.6lf T\n", value, value * 1e-3);
            printf("%.3lf G = %.9lf P\n\n", value, value * 1e-6);
            break;
        case 14:
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            printf("\n\n%.3lf T = %.3lf f\n", value, value * 1e27);
            printf("%.3lf T = %.3lf p\n", value, value * 1e24);
            printf("%.3lf T = %.3lf n\n", value, value * 1e21);
            printf("%.3lf T = %.3lf µ\n", value, value * 1e18);
            printf("%.3lf T = %.3lf m\n", value, value * 1e15);
            printf("%.3lf T = %.3lf c\n", value, value * 1e14);
            printf("%.3lf T = %.3lf d\n", value, value * 1e13);
            printf("%.3lf T = %.3lf basic unit\n", value, value * 1e14);
            printf("%.3lf T = %.3lf da\n", value, value * 1e11);
            printf("%.3lf T = %.3lf h\n", value, value * 1e10);
            printf("%.3lf T = %.3lf k\n", value, value * 1e9);
            printf("%.3lf T = %.3lf M\n", value, value * 1e6);
            printf("%.3lf T = %.3lf G\n", value, value * 1e3);
            printf("%.3lf T = %.6lf P\n\n", value, value * 1e-3);
            break;
        case 15:
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            printf("\n\n%.3lf P = %.3lf f\n", value, value * 1e30);
            printf("%.3lf P = %.3lf p\n", value, value * 1e27);
            printf("%.3lf P = %.3lf n\n", value, value * 1e24);
            printf("%.3lf P = %.3lf µ\n", value, value * 1e21);
            printf("%.3lf P = %.3lf m\n", value, value * 1e18);
            printf("%.3lf P = %.3lf c\n", value, value * 1e17);
            printf("%.3lf P = %.3lf d\n", value, value * 1e16);
            printf("%.3lf P = %.3lf basic unit\n", value, value * 1e15);
            printf("%.3lf P = %.3lf da\n", value, value * 1e14);
            printf("%.3lf P = %.3lf h\n", value, value * 1e13);
            printf("%.3lf P = %.3lf k\n", value, value * 1e12);
            printf("%.3lf P = %.3lf M\n", value, value * 1e9);
            printf("%.3lf P = %.3lf G\n", value, value * 1e6);
            printf("%.3lf P = %.3lf T\n\n", value, value * 1e3);
            break;
        case 16:
            return main();
        default:
            printf("\n\nInvalid choice, try again......\n\n");
            sleep(3);
            return SI_Prefixes();
    }
}

void Speed() {
    system("cls");

    printf("\t\t\t\t\t\t####################\n");
    printf("\t\t\t\t\t\t# Speed Conversion #\n");
    printf("\t\t\t\t\t\t####################");

    printf("\n\n~~~> Select the unit conversion from and to:\n\n");



    printf("1. km/h   to m/s\n");
    printf("2. m/s    to km/h\n\n");

    printf("3. ft/s   to mile/h\n");
    printf("4. mile/h to ft/s\n\n");

    printf("5. Return to main menu\n");

    printf("\n>> Enter your choice: ");
    scanf("%d",&choice);




    switch(choice)
    {
        case (1) :
            printf("\n\n>> Enter the value: ");
            scanf("%lf",&value);
            printf("\n\n%.3lf km/h = %.3lf m/s\n\n", value, value*.27778);
            break;
        case (2):
            printf("\n\n>> Enter the value: ");
            scanf("%lf",&value);
            printf("\n\n%.3lf m/s = %.3lf km/h\n\n", value, value*3.6);
            break;
        case (3):
            printf("\n\n>> Enter the value: ");
            scanf("%lf",&value);
            printf("\n\n%.3lf ft/s = %.3lf miles/h\n\n", value, value*0.681818182 );
            break;
        case (4):
            printf("\n\n>> Enter the value: ");
            scanf("%lf",&value);
            printf("\n\n%.3lf miles/h = %.3lf ft/s\n\n", value, value* 1.46667);
            break;
        case 5:
            return main();
        default :
            printf("\n\nInvalid choice, try again.....\n\n");
            sleep(3);
            return Speed();
    }
}

void Temperature() {

    system("cls");

    printf("\t\t\t\t\t\t##########################\n");
    printf("\t\t\t\t\t\t# Temperature Conversion #\n");
    printf("\t\t\t\t\t\t##########################");

    printf("\n\n~~~> Select the unit conversion from and to:\n\n");

    printf("1. Celsius    to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n\n");

    printf("3. Celsius    to Kelvin\n");
    printf("4. Kelvin     to Celsius\n\n");

    printf("5. Fahrenheit to Kelvin\n");
    printf("6. Kelvin     to Fahrenheit\n\n");
    printf("7. Return to main menu\n");

    printf("\n>> Enter your choice: ");
    scanf("%d", &choice);



    switch (choice) {
        case 1:
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            printf("\n\n%.3lf C = %.5lf F\n\n", value, value * (9.0/ 5.0) + 32);
            break;
        case 2:
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            printf("\n\n%.3lf F = %.5lf C\n\n", value, (5.0/ 9.0) * (value - 32));
            break;
        case 3:
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            printf("\n\n%.3lf K = %.5lf C\n\n", value, value + 273.15);
            break;
        case 4:
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            printf("\n\n%.3lf K = %.5lf C\n\n", value, value - 273.15);
            break;
        case 5:
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            printf("\n\n%.3lf F = %.5lf K\n\n", value, (value - 32) * (5.0/9.0) + 273.15);
            break;
        case 6:
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            printf("\n\n%.3lf K = %.5lf F\n\n", value, (value - 243.15) * 1.8 + 273.15);
            break;
        case 7:
            return main();
        default:
            printf("\n\nInvalid choice, try again.......\n\n");
            sleep(3);
            return Temperature();
    }
}

void Time() {
      system("cls");

      printf("\t\t\t\t\t\t##########################\n");
      printf("\t\t\t\t\t\t# Temperature Conversion #\n");
      printf("\t\t\t\t\t\t##########################");

      printf("\n\n~~~> Select the unit conversion from and to:\n\n");

      printf("1.  Hours   to  minutes\n");
      printf("2.  Minutes to  hours\n\n");

      printf("3.  Hours   to  seconds\n");
      printf("4.  Seconds to  hours\n\n");

      printf("5.  Minutes to seconds\n");
      printf("6.  Seconds to minutes\n\n");
      printf("7.  Return to main menu\n");

      printf("\n>> Enter your choice: ");
      scanf("%d", &choice);



      switch (choice) {
        case 1:
          printf("\n\n>> Enter the value: ");
          scanf("%lf", &value);
          value =  abs(value);
          printf("\n\nThe Result  = %.3lf min\n\n",  value * 60);
          break;
        case 2:
          printf("\n\n>> Enter the value: ");
          scanf("%lf", &value);
          value =  abs(value);
          printf("\n\nThe Result  = %.3lf hr\n\n",  value /60);
          break;
        case 3:
          printf("\n\n>> Enter the value: ");
          scanf("%lf", &value);
          value =  abs(value);
          printf("\n\nThe Result  = %.3lf sec\n\n",  value * 60 * 60);
          break;
        case 4:
          printf("\n\n>> Enter the value: ");
          scanf("%lf", &value);
          value =  abs(value);
          printf("\n\nThe Result  = %.3lf hr\n\n",   value /(60 * 60));
          break;
        case 5:
          printf("\n\n>> Enter the value: ");
          scanf("%lf", &value);
          value =  abs(value);
          printf("\n\nThe Result  = %.3lf sec\n\n",  value * 60);
          break;
        case 6:
          printf("\n\n>> Enter the value: ");
          scanf("%lf", &value);
          value =  abs(value);
          printf("\n\nThe Result  = %.3lf min\n\n",  value / 60);
          break;
        case 7:
            return main();
        default:
          printf("\n\nInvalid choice, try again.....\n\n");
          sleep(3);
          return Time();

      }
}

void Volume() {
    system("cls");

    printf("\t\t\t\t\t\t#####################\n");
    printf("\t\t\t\t\t\t# Volume Conversion #\n");
    printf("\t\t\t\t\t\t#####################");

    printf("\n\n~~~> Select the unit conversion from and to:\n\n");

    printf("1.  Cubic centimeters to cubic meters\n");
    printf("2.  Cubic meters      to cubic centimeters\n\n");

    printf("3.  Cubic centimeters to liters\n");
    printf("4.  Liters            to cubic centimeters\n\n");

    printf("5.  Cubic centimeters to gallons\n");
    printf("6.  Gallons           to cubic centimeters\n\n");

    printf("7.  Cubic centimeters to barrels\n");
    printf("8.  Barrels           to cubic centimeters\n\n");

    printf("9.  Cubic meters      to liters\n");
    printf("10. Liters            to cubic meters\n\n");

    printf("11. Cubic meters      to gallons\n");
    printf("12. Gallon            to cubic meters\n\n");

    printf("13. Cubic meters      to barrels\n");
    printf("14. Barrels           to cubic meters\n\n");

    printf("15. Liters            to gallons\n");
    printf("16. Gallons           to liters\n\n");

    printf("17. Liters            to barrels\n");
    printf("18. Barrels           to liters\n\n");

    printf("19. Gallons           to barrels\n");
    printf("20. Barrels           to gallons\n\n");
    printf("21. Return to main menu\n");


    printf("\n>> Enter your choice: ");
    scanf("%d", &choice);



    switch(choice) {
        case(1):
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            value =  abs(value);
            printf("\n\n%.3lf cubic centimeters = %.7lf cubic meters\n", value, value*.000001);
            break;
        case(2):
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            value =  abs(value);
            printf("\n\n%.3lf cubic meters = %.3lf cubic centimeters\n", value, value*1000000);
            break;
        case(3):
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            value =  abs(value);
            printf("\n\n%.3lf cubic centimeters = %.3lf liters\n", value, value*0.001);
            break;
        case(4):
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            value =  abs(value);
            printf("\n\n%.3lf liters = %.3lf cubic centimeters\n", value, value*1000);
            break;
        case(5):
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            value =  abs(value);
            printf("\n\n%.3lf cubic centimeters = %.6lf gallons\n\n", value, value*0.00026417);
            break;
        case(6):
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            value =  abs(value);
            printf("\n\n%.3lf gallons = %.3lf cubic centimeters\n\n", value, value*3785.41);
            break;
        case(7):
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            value =  abs(value);
            printf("\n\n%.3lf cubic centimeters = %.7lf barrels\n\n", value, value*0.000006289);
            break;
        case(8):
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            value =  abs(value);
            printf("\n\n%.3lf barrels = %.3lf cubic centimeters\n\n", value, value*158987.29);
            break;
        case(9):
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            value =  abs(value);
            printf("\n\n%.3lf cubic meters = %.3lf liters\n\n", value, value*1000 );
            break;
        case(10):
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            value =  abs(value);
            printf("\n\n%.3lf liters = %.4lf cubic meters\n\n", value, value*0.001);
            break;
        case(11):
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            value =  abs(value);
            printf("\n\n%.3lf cubic meters = %.3lf gallons\n\n",value,value*264.17);
            break;
        case(12):
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            value =  abs(value);
            printf("\n\n%.3lf gallons = %.4lf cubic meters\n\n", value, value*0.003785);
            break;
        case(13):
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            value =  abs(value);
            printf("\n\n%.3lf cubic meters = %.3lf barrels\n\n", value, value*8.386);
            break;
        case(14):
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            value =  abs(value);
            printf("\n\n%.3lf barrels = %.3lf cubic meters\n\n", value, value*0.11924);
            break;
        case(15):
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            printf("\n\n%.3lf liters = %.3lf gallons\n\n", value, value*0.26417);
            break;
        case(16):
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            value =  abs(value);
            printf("\n\n%.3lf gallons = %.3lf liters\n\n", value, value*3.7854);
            break;
        case(17):
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            value =  abs(value);
            printf("\n\n%.3lf liters = %.4lf  barrels\n\n", value, value*0.008386);
            break;
        case(18):
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            value =  abs(value);
            printf("\n\n%.3lf barrels = %.3lf liters\n\n", value, value*119.24);
            break;
        case(19):
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            value =  abs(value);
            printf("\n\n%.3lf gallons = %.3lf barrels\n\n", value, value*0.031746);
            break;
        case(20):
            printf("\n\n>> Enter the value: ");
            scanf("%lf", &value);
            value =  abs(value);
            printf("\n\n%.3lf barrels = %.3lf gallons\n\n", value, value*31.5);
            break;
        case (21):
            return main();
        default :
            printf("\n\nInvalid choice, try again....\n\n");
            sleep(3);
            return Volume();
    }
}
