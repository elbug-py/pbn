#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct HeroInfo
{
    int id;
    char *name;
    int intelligence;
    int strength;
    int speed;
    int durability;
    int power;
    int combat;
    char *full_name;
    char *alter_egos;
    char *aliases__001;
    char *place_of_birth;
    char *first_appearance;
    char *publisher;
    char *alignment;
    char *gender;
    char *race;
    char *height__001;
    char *height__002;
    char *weight__001;
    char *weight__002;
    char *eye_color;
    char *hair_color;
    char *work__occupation;
    char *work__base;
    char *connections__group_affiliation;
    char *connections__relatives;
} hero;

void muestrastruct(hero *o)
{
    //(*o).algo es igual a o->algo
    printf("ID: '%d' NAME: %s INTELLIGENCE:%d STRENGTH:%d SPEED:%d DURABILITY:%d POWER:%d COMBAT:%d FULLNAME: %s ALTER EGOS: %s ALIASES:%s POB:%s FA:%s PUBLISHER:%s ALIGN:%s GENDER:%s RACE:%s\n", o->id, o->name, o->intelligence, o->strength, o->speed, o->durability, o->power, o->combat, o->full_name, o->alter_egos, o->aliases__001, o->place_of_birth, o->first_appearance, o->publisher, o->alignment, o->gender, o->race);
}

int main()
{
    FILE *heroes;

    heroes = fopen("data (1).txt", "r");
    int len_file = 0;
    // hero * heroPtr;

    char *str;
    str = (char *)malloc(3000 * sizeof(char));
    int i = 0;
    char *read;
    read = (char *)malloc(3000 * sizeof(char));

    while (fgets(read, 2999, heroes))
    {  
        len_file++;  
    }
    free(read);

    printf("LENGTH IS %d\n\n", len_file);

    hero *heroPtr = (hero *)malloc(sizeof(hero) * len_file);

    rewind(heroes);

    while (fgets(str, 2999, heroes))
    {
        // if(feof(heroes)) break;

        int id;

        char *token = strtok(str, ";");

        if (token[0] == '"')
            memmove(token, token + 1, strlen(token));

        id = atoi(token);

        (heroPtr + i)->id = id;
        if (token != NULL)
        {
            token = strtok(NULL, ";");
            (heroPtr + i)->name = (char *)malloc((strlen(token) + 2) * sizeof(char));
            strcpy((heroPtr + i)->name, token);
        }

        if (token != NULL)
        {
            token = strtok(NULL, ";");
            (heroPtr + i)->intelligence = atoi(token);
        }

        if (token != NULL)
        {
            token = strtok(NULL, ";");
            (heroPtr + i)->strength = atoi(token);
        }

        if (token != NULL)
        {
            token = strtok(NULL, ";");
            (heroPtr + i)->speed = atoi(token);
        }

        if (token != NULL)
        {
            token = strtok(NULL, ";");
            (heroPtr + i)->durability = atoi(token);
        }

        if (token != NULL)
        {
            token = strtok(NULL, ";");
            (heroPtr + i)->power = atoi(token);
        }

        if (token != NULL)
        {
            token = strtok(NULL, ";");
            (heroPtr + i)->combat = atoi(token);
        }

       if (token != NULL)
        {
            token = strtok(NULL, ";");
            (heroPtr + i)->full_name = (char *)malloc((strlen(token) + 2) * sizeof(char));
            strcpy((heroPtr + i)->full_name, token);
        }
        
        if (token != NULL)
        {
            token = strtok(NULL, ";");
            (heroPtr + i)->alter_egos = (char *)malloc((strlen(token) + 2) * sizeof(char));
            strcpy((heroPtr + i)->alter_egos, token);
        }

        if (token != NULL)
        {
            token = strtok(NULL, ";");
            (heroPtr + i)->aliases__001 = (char *)malloc((strlen(token) + 2) * sizeof(char));
            strcpy((heroPtr + i)->aliases__001, token);
        }

        if (token != NULL)
        {
            token = strtok(NULL, ";");
            (heroPtr + i)->place_of_birth = (char *)malloc((strlen(token) + 2) * sizeof(char));
            strcpy((heroPtr + i)->place_of_birth, token);
        }

        if (token != NULL)
        {
            token = strtok(NULL, ";");
            (heroPtr + i)->first_appearance = (char *)malloc((strlen(token) + 2) * sizeof(char));
            strcpy((heroPtr + i)->first_appearance, token);
        }
        
        if (token != NULL)
        {
            token = strtok(NULL, ";");
            (heroPtr + i)->publisher = (char *)malloc((strlen(token) + 2) * sizeof(char));
            strcpy((heroPtr + i)->publisher, token);
        }

        if (token != NULL)
        {
            token = strtok(NULL, ";");
            (heroPtr + i)->alignment = (char *)malloc((strlen(token) + 2) * sizeof(char));
            strcpy((heroPtr + i)->alignment, token);
        }

        if (token != NULL)
        {
            token = strtok(NULL, ";");
            (heroPtr + i)->gender = (char *)malloc((strlen(token) + 2) * sizeof(char));
            strcpy((heroPtr + i)->gender, token);
        }

        if (token != NULL)
        {
            token = strtok(NULL, ";");
            (heroPtr + i)->race = (char *)malloc((strlen(token) + 2) * sizeof(char));
            strcpy((heroPtr + i)->race, token);
        }
        
        if (token != NULL)
        {
            token = strtok(NULL, ";");
            (heroPtr + i)->height__001 = (char *)malloc((strlen(token) + 2) * sizeof(char));
            strcpy((heroPtr + i)->height__001, token);
        }
        
        if (token != NULL)
        {
            token = strtok(NULL, ";");
            (heroPtr + i)->height__002 = (char *)malloc((strlen(token) + 2) * sizeof(char));
            strcpy((heroPtr + i)->height__002, token);
        }
        
        if (token != NULL)
        {
            token = strtok(NULL, ";");
            (heroPtr + i)->weight__001 = (char *)malloc((strlen(token) + 2) * sizeof(char));
            strcpy((heroPtr + i)->weight__001, token);
        }

        if (token != NULL)
        {
            token = strtok(NULL, ";");
            (heroPtr + i)->weight__002 = (char *)malloc((strlen(token) + 2) * sizeof(char));
            strcpy((heroPtr + i)->weight__002, token);
        }
        
        if (token != NULL)
        {
            token = strtok(NULL, ";");
            (heroPtr + i)->eye_color = (char *)malloc((strlen(token) + 2) * sizeof(char));
            strcpy((heroPtr + i)->eye_color, token);
        }

        if (token != NULL)
        {
            token = strtok(NULL, ";");
            (heroPtr + i)->hair_color = (char *)malloc((strlen(token) + 2) * sizeof(char));
            strcpy((heroPtr + i)->hair_color, token);
        }

        if (token != NULL)
        {
            token = strtok(NULL, ";");
            (heroPtr + i)->work__occupation = (char *)malloc((strlen(token) + 2) * sizeof(char));
            strcpy((heroPtr + i)->work__occupation, token);
        }

        if (token != NULL)
        {
            token = strtok(NULL, ";");
            (heroPtr + i)->work__base = (char *)malloc((strlen(token) + 2) * sizeof(char));
            strcpy((heroPtr + i)->work__base, token);
        }

        if (token != NULL)
        {
            token = strtok(NULL, ";");
            (heroPtr + i)->connections__group_affiliation = (char *)malloc((strlen(token) + 2) * sizeof(char));
            strcpy((heroPtr + i)->connections__group_affiliation, token);
        }
/*
        if (token != NULL)
        {
            token = strtok(NULL, ";");
            (heroPtr + i)->connections__relatives = (char *)malloc((strlen(token) + 2) * sizeof(char));
            strcpy((heroPtr + i)->connections__relatives, token);
        }
        */
        i++;

        if (i > len_file) break;
    }

    printf("\n\nPROBANDO\n");

    

    for (int i = 0; i < len_file; i++)
    {
        if (strcmp(heroPtr[i].name, "Ymir") == 0)
        {
            muestrastruct(&heroPtr[i]);
        }
        
        
    }



    printf("oal\n");
    for (int i = 0; i < len_file; i++)
    {   
        free(heroPtr[i].name);
        free(heroPtr[i].full_name);
        free(heroPtr[i].alter_egos);
        free(heroPtr[i].aliases__001);
        free(heroPtr[i].place_of_birth);
        free(heroPtr[i].first_appearance);
        free(heroPtr[i].publisher);
        free(heroPtr[i].alignment);
        heroPtr[i].alignment=NULL;
        free(heroPtr[i].gender);
        heroPtr[i].gender=NULL;
        free(heroPtr[i].race);
        heroPtr[i].race=NULL;
        free(heroPtr[i].height__001);
        heroPtr[i].height__001=NULL;
        free(heroPtr[i].height__002);
        heroPtr[i].height__002=NULL;
        free(heroPtr[i].weight__001);
        free(heroPtr[i].weight__002);
        free(heroPtr[i].eye_color);
        free(heroPtr[i].hair_color);
        free(heroPtr[i].work__occupation);
        free(heroPtr[i].work__base);
        free(heroPtr[i].connections__group_affiliation);
        /*free(heroPtr[i].connections__relatives);*/
        
    }
    
    free(heroPtr);
    free(str);
    fclose(heroes);
    return 0;
}