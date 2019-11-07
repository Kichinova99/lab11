#include  <stdio.h>

int main()
{
        int num; //na otsenku 3
        printf("Vvedite nomer mesyatsa: ");
        scanf("%d", &num);

        switch(num)
        {
                case 1: case 2: case 12: printf("Vremya goda: Zima\n"); break;
                case 3: case 4: case 5: printf("Vremya goda: Vesna\n"); break;
                case 6: case 7: case 8: printf("Vremya goda: Leto\n"); break;
                case 9: case 10: case 11: printf("Vremya goda: Osen\n"); break;
        }

        int k; //na otsenku 4
        printf("Vvedite chislo ot 1 do 99: ");
        scanf("%d", &k);

        printf("Mne %d", k);
        if (k > 4 && k < 21){
                printf(" let\n");
        }else{
                int ost = k % 10;
                switch(ost)
                {
                        case 1: printf(" god\n"); break;
                        case 2: case 3: case 4: printf(" goda\n"); break;
                        case 0: case 5: case 6: case 7: case 8: case 9: printf(" let\n"); break;
                }
        }

        int m, d, year; //na otsenku 5
        printf("Vvedite datu v vide dd mm yyyy: ");
        scanf("%d %d %d", &d, &m, &year);

        if (m < 3){
                m +=12;
                year--;
        }
        int c = year / 100;
        int y = year % 100;
        int x = ((m + 1) * 26 / 10 + d + y + (y / 4) + (c / 4) - 2 * c) % 7;
        char *days[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
        printf("%s\n", days[x]);
}
