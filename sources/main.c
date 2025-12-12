/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebaron <alebaron@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:20:35 by alebaron          #+#    #+#             */
/*   Updated: 2025/11/11 17:13:45 by alebaron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	afficherSeparateur(const char *nom);

#define ROUGE	"\033[31m"
#define VERT	"\033[32m"
#define JONE	"\033[33m"
#define BLEU	"\033[34m"
#define VIOLET	"\033[35m"
#define END		"\033[00m"

int	main(void)
{
	int result_sans = 1;
	int i = 0;
	int j = 0;

	afficherSeparateur("Test sans %");

	printf("%sft_printf(\"Nidorino used 8 Horn Attack.\")%s\n\n", VIOLET, END);

	printf("%sRésultat attendu : %s\n", BLEU, END);
	i = printf("Nidorino used 8 Horn Attack.");
	printf("\n\n%sTon résultat :%s\n", BLEU, END);
	j = ft_printf("Nidorino used 8 Horn Attack.");

	printf("\n\n%s%d%s / %s%d%s", JONE, i, END, JONE, j, END);

	if (i != j) {result_sans = 0; printf(" (%sOh dang it !%s)", ROUGE, END);}
	else        {result_sans = 1; printf(" (%sYepee !%s)"     ,  VERT, END);}

	afficherSeparateur("Test %c");

	int result_c = 1;

	printf("%sft_printf(\"%%c\")%s\n\n", VIOLET, END);

	printf("%sRésultat attendu : %s\n", BLEU, END);
	i = printf("%c", 'c');
	printf("\n\n%sTon résultat :%s\n", BLEU, END);
	j = ft_printf("%c", 'c');

	printf("\n\n%s%d%s / %s%d%s", JONE, i, END, JONE, j, END);

	if (i != j) {result_c = 0; printf(" (%sOh dang it !%s)", ROUGE, END);}
	else        {result_c = 1; printf(" (%sYepee !%s)"     ,  VERT, END);}

	afficherSeparateur("Test %s");

	int result_s = 1;

	printf("%sft_printf(\"%%s\")%s\n\n", VIOLET, END);

	printf("%sRésultat attendu : %s\n", BLEU, END);
	i = printf("%s", "Dugtrio was found in Crown Shrine.");
	printf("\n\n%sTon résultat :%s\n", BLEU, END);
	j = ft_printf("%s", "Dugtrio was found in Crown Shrine.");

	printf("\n\n%s%d%s / %s%d%s", JONE, i, END, JONE, j, END);

	if (i != j) {result_s = 0; printf(" (%sOh dang it !%s)", ROUGE, END);}
	else        {result_s = 1; printf(" (%sYepee !%s)"     ,  VERT, END);}

	char *test = NULL;

	printf("\n\n%sft_printf(null)%s\n\n", VIOLET, END);

	printf("%sRésultat attendu : %s\n", BLEU, END);
	i = printf("%s", test);
	printf("\n\n%sTon résultat :%s\n", BLEU, END);
	j = ft_printf("%s", test);

	printf("\n\n%s%d%s / %s%d%s", JONE, i, END, JONE, j, END);

	if (i != j) {result_s = 0; printf(" (%sOh dang it !%s)", ROUGE, END);}
	else        {              printf(" (%sYepee !%s)"     ,  VERT, END);}

	afficherSeparateur("Test %p");

	int result_p = 1;

	printf("%sft_printf(\"%%p\")%s\n\n", VIOLET, END);

	printf("%sRésultat attendu : %s\n", BLEU, END);
	i = printf("%p", &i);
	printf("\n\n%sTon résultat :%s\n", BLEU, END);
	j = ft_printf("%p", &i);

	printf("\n\n%s%d%s / %s%d%s", JONE, i, END, JONE, j, END);

	if (i != j) {result_p = 0; printf(" (%sOh dang it !%s)", ROUGE, END);}
	else        {result_p = 1; printf(" (%sYepee !%s)"     ,  VERT, END);}

	printf("\n\n%sft_printf(nil)%s\n\n", VIOLET, END);

	printf("%sRésultat attendu : %s\n", BLEU, END);
	i = printf("%p", test);
	printf("\n\n%sTon résultat :%s\n", BLEU, END);
	j = ft_printf("%p", test);

	printf("\n\n%s%d%s / %s%d%s", JONE, i, END, JONE, j, END);

	if (i != j) {result_p = 0; printf(" (%sOh dang it !%s)", ROUGE, END);}
	else        {              printf(" (%sYepee !%s)"     ,  VERT, END);}

	afficherSeparateur("Test %d");

	int result_d = 1;

	printf("%sft_printf(\"Psyduck evolve level %%d\")%s\n\n", VIOLET, END);

	printf("%sRésultat attendu : %s\n", BLEU, END);
	i = printf("Psyduck evolve level %d", 33);
	printf("\n\n%sTon résultat :%s\n", BLEU, END);
	j = ft_printf("Psyduck evolve level %d", 33);

	printf("\n\n%s%d%s / %s%d%s", JONE, i, END, JONE, j, END);

	if (i != j) {result_d = 0; printf(" (%sOh dang it !%s)", ROUGE, END);}
	else        {result_d = 1; printf(" (%sYepee !%s)"     ,  VERT, END);}

	printf("\n\n%sft_printf(\"%%d\")%s\n\n", VIOLET, END);

	printf("%sRésultat attendu : %s\n", BLEU, END);
	i = printf("%d", INT_MIN);
	printf("\n\n%sTon résultat :%s\n", BLEU, END);
	j = ft_printf("%d", INT_MIN);

	printf("\n\n%s%d%s / %s%d%s", JONE, i, END, JONE, j, END);

	if (i != j) {result_d = 0; printf(" (%sOh dang it !%s)", ROUGE, END);}
	else        {              printf(" (%sYepee !%s)"     ,  VERT, END);}

	printf("\n\n%sft_printf(\"%%d\")%s\n\n", VIOLET, END);

	printf("%sRésultat attendu : %s\n", BLEU, END);
	i = printf("%d", 0);
	printf("\n\n%sTon résultat :%s\n", BLEU, END);
	j = ft_printf("%d", 0);

	printf("\n\n%s%d%s / %s%d%s", JONE, i, END, JONE, j, END);

	if (i != j) {result_d = 0; printf(" (%sOh dang it !%s)", ROUGE, END);}
	else        {              printf(" (%sYepee !%s)"     ,  VERT, END);}

	afficherSeparateur("Test %i");

	int result_i = 1; 

	printf("%sft_printf(\"Psyduck evolve level %%d\")%s\n\n", VIOLET, END);

	printf("%sRésultat attendu : %s\n", BLEU, END);
	i = printf("Psyduck evolve level %i", INT_MAX);
	printf("\n\n%sTon résultat :%s\n", BLEU, END);
	j = ft_printf("Psyduck evolve level %i", INT_MAX);

	printf("\n\n%s%d%s / %s%d%s", JONE, i, END, JONE, j, END);

	if (i != j) {result_i = 0; printf(" (%sOh dang it !%s)", ROUGE, END);}
	else        {result_i = 1; printf(" (%sYepee !%s)"     ,  VERT, END);}

	afficherSeparateur("Test %u");

	int result_u = 1; 

	printf("%sft_printf(\"Psyduck evolve level %%u\")%s\n\n", VIOLET, END);

	printf("%sRésultat attendu : %s\n", BLEU, END);
	i = printf("Psyduck evolve level %u", 33);
	printf("\n\n%sTon résultat :%s\n", BLEU, END);
	j = ft_printf("Psyduck evolve level %u", 33);

	printf("\n\n%s%d%s / %s%d%s", JONE, i, END, JONE, j, END);

	if (i != j) {result_u = 0; printf(" (%sOh dang it !%s)", ROUGE, END);}
	else        {result_u = 1; printf(" (%sYepee !%s)"     ,  VERT, END);}

	printf("%s\n\nft_printf(\"Psyduck evolve level %%u\")%s\n\n", VIOLET, END);

	printf("%sRésultat attendu : %s\n", BLEU, END);
	i = printf("Psyduck evolve level %u", -33);
	printf("\n\n%sTon résultat :%s\n", BLEU, END);
	j = ft_printf("Psyduck evolve level %u", -33);

	printf("\n\n%s%d%s / %s%d%s", JONE, i, END, JONE, j, END);

	if (i != j) {result_u = 0; printf(" (%sOh dang it !%s)", ROUGE, END);}
	else        {              printf(" (%sYepee !%s)"     ,  VERT, END);}

	afficherSeparateur("Test %x");

	int result_x = 1; 

	printf("%sft_printf(\"Psyduck evolve level %%x\")%s\n\n", VIOLET, END);

	printf("%sRésultat attendu : %s\n", BLEU, END);
	i = printf("Psyduck evolve level %x", 255);
	printf("\n\n%sTon résultat :%s\n", BLEU, END);
	j = ft_printf("Psyduck evolve level %x", 255);

	printf("\n\n%s%d%s / %s%d%s", JONE, i, END, JONE, j, END);

	if (i != j) {result_x = 0; printf(" (%sOh dang it !%s)", ROUGE, END);}
	else        {result_x = 1; printf(" (%sYepee !%s)"     ,  VERT, END);}

	printf("%s\n\nft_printf(\"Psyduck evolve level %%x\")%s\n\n", VIOLET, END);

	printf("%sRésultat attendu : %s\n", BLEU, END);
	i = printf("Psyduck evolve level %x", -33);
	printf("\n\n%sTon résultat :%s\n", BLEU, END);
	j = ft_printf("Psyduck evolve level %x", -33);

	printf("\n\n%s%d%s / %s%d%s", JONE, i, END, JONE, j, END);

	if (i != j) {result_x = 0; printf(" (%sOh dang it !%s)", ROUGE, END);}
	else        {              printf(" (%sYepee !%s)"     ,  VERT, END);}

	afficherSeparateur("Test %x");

	int result_X = 1; 

	printf("%sft_printf(\"Psyduck evolve level %%X\")%s\n\n", VIOLET, END);

	printf("%sRésultat attendu : %s\n", BLEU, END);
	i = printf("Psyduck evolve level %X", 255);
	printf("\n\n%sTon résultat :%s\n", BLEU, END);
	j = ft_printf("Psyduck evolve level %X", 255);

	printf("\n\n%s%d%s / %s%d%s", JONE, i, END, JONE, j, END);

	if (i != j) {result_X = 0; printf(" (%sOh dang it !%s)", ROUGE, END);}
	else        {result_X = 1; printf(" (%sYepee !%s)"     ,  VERT, END);}

	printf("%s\n\nft_printf(\"Psyduck evolve level %%X\")%s\n\n", VIOLET, END);

	printf("%sRésultat attendu : %s\n", BLEU, END);
	i = printf("Psyduck evolve level %X", -33);
	printf("\n\n%sTon résultat :%s\n", BLEU, END);
	j = ft_printf("Psyduck evolve level %X", -33);

	printf("\n\n%s%d%s / %s%d%s", JONE, i, END, JONE, j, END);

	if (i != j) {result_X = 0; printf(" (%sOh dang it !%s)", ROUGE, END);}
	else        {              printf(" (%sYepee !%s)"     ,  VERT, END);}

	afficherSeparateur("Test %%");

	int result_pourcent = 1; 

	printf("%sft_printf(%%)%s\n\n", VIOLET, END);

	printf("%sRésultat attendu : %s\n", BLEU, END);
	i = printf("%%");
	printf("\n\n%sTon résultat :%s\n", BLEU, END);
	j = ft_printf("%%");

	printf("\n\n%s%d%s / %s%d%s", JONE, i, END, JONE, j, END);

	if (i != j) {result_pourcent = 0; printf(" (%sOh dang it !%s)", ROUGE, END);}
	else        {result_pourcent = 1; printf(" (%sYepee !%s)"     ,  VERT, END);}

	afficherSeparateur("Resultats");

	printf("%-25s %10s\n\n", "FONCTIONS", "RESULTAT");

	if (result_sans == 0)
		printf("%-25s %20s\n", "Sans %", "\033[31mKO\033[00m");
	else
		printf("%-25s %20s\n", "Sans %", "\033[32mOK\033[00m");

	if (result_c == 0)
		printf("%-25s %20s\n", "%c", "\033[31mKO\033[00m");
	else
		printf("%-25s %20s\n", "%c", "\033[32mOK\033[00m");

	if (result_s == 0)
		printf("%-25s %20s\n", "%s", "\033[31mKO\033[00m");
	else
		printf("%-25s %20s\n", "%s", "\033[32mOK\033[00m");

	if (result_p == 0)
		printf("%-25s %20s\n", "%p", "\033[31mKO\033[00m");
	else
		printf("%-25s %20s\n", "%p", "\033[32mOK\033[00m");

	if (result_d == 0)
		printf("%-25s %20s\n", "%d", "\033[31mKO\033[00m");
	else
		printf("%-25s %20s\n", "%d", "\033[32mOK\033[00m");

	if (result_i == 0)
		printf("%-25s %20s\n", "%i", "\033[31mKO\033[00m");
	else
		printf("%-25s %20s\n", "%i", "\033[32mOK\033[00m");

	if (result_u == 0)
		printf("%-25s %20s\n", "%u", "\033[31mKO\033[00m");
	else
		printf("%-25s %20s\n", "%u", "\033[32mOK\033[00m");

	if (result_x == 0)
		printf("%-25s %20s\n", "%x", "\033[31mKO\033[00m");
	else
		printf("%-25s %20s\n", "%x", "\033[32mOK\033[00m");

	if (result_X == 0)
		printf("%-25s %20s\n", "%X", "\033[31mKO\033[00m");
	else
		printf("%-25s %20s\n", "%X", "\033[32mOK\033[00m");

	if (result_pourcent == 0)
		printf("%-25s %20s\n", "%%", "\033[31mKO\033[00m");
	else
		printf("%-25s %20s\n", "%%", "\033[32mOK\033[00m");

	printf("\nCoin coin !\n");
}

void afficherSeparateur(const char *nom) 
{
	int len = strlen(nom);
	int espaceTotal = 93; // 4 = 2 pour les | et 2 pour les espaces autour du nom
    int espaceGauche = (espaceTotal - len) / 2;
    int espaceDroite = espaceTotal - len - espaceGauche;
	
	printf("\n\n");
    printf("+-----------------------------------------------------------------------------------------------+\n");
    printf("|");
    	for (int i = 0; i < espaceGauche; i++) printf(" ");
    printf(" %s ", nom);
    	for (int i = 0; i < espaceDroite; i++) printf(" ");
    printf("|\n");
    printf("+-----------------------------------------------------------------------------------------------+\n\n");
}

/* Coin coin */ 
//
//       ,~~.
//  ,   (  ^ )>
//  )`~~'   (     _      _      _
// (  .__)   )  >(.)__ <(.)__ <(.)__
//  `-.____,'    (___/  (___/  (___/
//
/* Coin coin */ 