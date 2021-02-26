#include <gtk/gtk.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

//#include <string.h>

// обработка кнопки "0" **********************************************
void onBtnNumClicked0(GtkButton * btn1, gpointer main_entry) {
	const gchar *enry_buf = gtk_entry_get_text(main_entry);
	char ch[strlen(enry_buf)+1];
	sprintf(ch,"%s",enry_buf);
		if(strcmp(ch, "0")==0)
			gtk_entry_set_text(main_entry, ch);
		else
		{
			strcat(ch, "0");
			gtk_entry_set_text(main_entry, ch);
		}
}

// обработка кнопки "1" **********************************************
void onBtnNumClicked1(GtkButton * btn1, gpointer main_entry) {
	const gchar *enry_buf = gtk_entry_get_text(main_entry);
	char ch[strlen(enry_buf)+1];
	sprintf(ch,"%s",enry_buf);
		if(strcmp(ch, "0")==0)
			gtk_entry_set_text(main_entry, "1");
		else
		{
			strcat(ch, "1");
			gtk_entry_set_text(main_entry, ch);
		}
}
// обработка кнопки "2" **********************************************
void onBtnNumClicked2(GtkButton * btn1, gpointer main_entry) {
	const gchar *enry_buf = gtk_entry_get_text(main_entry);
	char ch[strlen(enry_buf)+1];
	sprintf(ch,"%s",enry_buf);
		if(strcmp(ch, "0")==0)
			gtk_entry_set_text(main_entry, "2");
		else
		{
			strcat(ch, "2");
			gtk_entry_set_text(main_entry, ch);
		}
}
// обработка кнопки "3" **********************************************
void onBtnNumClicked3(GtkButton * btn1, gpointer main_entry) {
	const gchar *enry_buf = gtk_entry_get_text(main_entry);
	char ch[strlen(enry_buf)+1];
	sprintf(ch,"%s",enry_buf);
		if(strcmp(ch, "0")==0)
			gtk_entry_set_text(main_entry, "3");
		else
		{
			strcat(ch, "3");
			gtk_entry_set_text(main_entry, ch);
		}
}
// обработка кнопки "4" **********************************************
void onBtnNumClicked4(GtkButton * btn1, gpointer main_entry) {
	const gchar *enry_buf = gtk_entry_get_text(main_entry);
	char ch[strlen(enry_buf)+1];
	sprintf(ch,"%s",enry_buf);
		if(strcmp(ch, "0")==0)
			gtk_entry_set_text(main_entry, "4");
		else
		{
			strcat(ch, "4");
			gtk_entry_set_text(main_entry, ch);
		}
}
// обработка кнопки "5" **********************************************
void onBtnNumClicked5(GtkButton * btn1, gpointer main_entry) {
	const gchar *enry_buf = gtk_entry_get_text(main_entry);
	char ch[strlen(enry_buf)+1];
	sprintf(ch,"%s",enry_buf);
		if(strcmp(ch, "0")==0)
			gtk_entry_set_text(main_entry, "5");
		else
		{
			strcat(ch, "5");
			gtk_entry_set_text(main_entry, ch);
		}
}
// обработка кнопки "6" **********************************************
void onBtnNumClicked6(GtkButton * btn1, gpointer main_entry) {
	const gchar *enry_buf = gtk_entry_get_text(main_entry);
	char ch[strlen(enry_buf)+1];
	sprintf(ch,"%s",enry_buf);
		if(strcmp(ch, "0")==0)
			gtk_entry_set_text(main_entry, "6");
		else
		{
			strcat(ch, "6");
			gtk_entry_set_text(main_entry, ch);
		}
}
// обработка кнопки "7" **********************************************
void onBtnNumClicked7(GtkButton * btn1, gpointer main_entry) {
	const gchar *enry_buf = gtk_entry_get_text(main_entry);
	char ch[strlen(enry_buf)+1];
	sprintf(ch,"%s",enry_buf);
		if(strcmp(ch, "0")==0)
			gtk_entry_set_text(main_entry, "7");
		else
		{
			strcat(ch, "7");
			gtk_entry_set_text(main_entry, ch);
		}
}
// обработка кнопки "8" **********************************************
void onBtnNumClicked8(GtkButton * btn1, gpointer main_entry) {
	const gchar *enry_buf = gtk_entry_get_text(main_entry);
	char ch[strlen(enry_buf)+1];
	sprintf(ch,"%s",enry_buf);
		if(strcmp(ch, "0")==0)
			gtk_entry_set_text(main_entry, "8");
		else
		{
			strcat(ch, "8");
			gtk_entry_set_text(main_entry, ch);
		}
}
// обработка кнопки "9" **********************************************
void onBtnNumClicked9(GtkButton * btn1, gpointer main_entry) {
	const gchar *enry_buf = gtk_entry_get_text(main_entry);
	char ch[strlen(enry_buf)+1];
	sprintf(ch,"%s",enry_buf);
		if(strcmp(ch, "0")==0)
			gtk_entry_set_text(main_entry, "9");
		else
		{
			strcat(ch, "9");
			gtk_entry_set_text(main_entry, ch);
		}
}
// обработка кнопки "Clear" "C" **********************************************
void onBtnClickedClear(GtkButton * btn1, gpointer main_entry) {
	gtk_entry_set_text(main_entry, "0");
}
// обработка кнопки "Back" "<--" **********************************************
void onBtnClickedBack(GtkButton * btn1, gpointer main_entry) {
	const gchar *enry_buf = gtk_entry_get_text(main_entry);
	if(strlen(enry_buf)>1)
	{
		char *ch = g_strndup(enry_buf, strlen(enry_buf)-1);
		gtk_entry_set_text(main_entry, ch);
	}
	else
		gtk_entry_set_text(main_entry, "0");
}
// обработка кнопки "Comma" "," **********************************************
void onBtnClickedComma(GtkButton * btn1, gpointer main_entry) {
	const gchar *enry_buf = gtk_entry_get_text(main_entry);
		if(g_strstr_len(enry_buf, strlen(enry_buf), ",")==NULL)
		{
			char ch[strlen(enry_buf)+1];
			sprintf(ch,"%s",enry_buf);
			strcat(ch, ",");
			gtk_entry_set_text(main_entry, ch);
		}
		else
		{
			if (g_str_has_prefix(enry_buf, ",")==TRUE)
			{
				gtk_entry_set_text(main_entry, enry_buf);
			}
			else if ((g_strrstr_len(enry_buf, strlen(enry_buf), ",")<g_strstr_len(enry_buf, strlen(enry_buf), "+")) | (g_strrstr_len(enry_buf, strlen(enry_buf), ",")<g_strstr_len(enry_buf, strlen(enry_buf), "-")) | (g_strrstr_len(enry_buf, strlen(enry_buf), ",")<g_strstr_len(enry_buf, strlen(enry_buf), "*")) | (g_strrstr_len(enry_buf, strlen(enry_buf), ",")<g_strstr_len(enry_buf, strlen(enry_buf), "/")) )
			{
				char ch[strlen(enry_buf)+1];
				sprintf(ch,"%s",enry_buf);
				strcat(ch, ",");
				gtk_entry_set_text(main_entry, ch);
			}
			else
			{
				gtk_entry_set_text(main_entry, enry_buf);
			}
		}	
}
// обработка кнопки "PlusMinus" "+/-" **********************************************
void onBtnClickedPlusMinus(GtkButton * btn1, gpointer main_entry) {
	const gchar *enry_buf = gtk_entry_get_text(main_entry);
		if(g_str_has_prefix(enry_buf, "-")==FALSE)
		{
			char ch[strlen(enry_buf)+2];
			sprintf(ch,"%c%s",'-',enry_buf);
			gtk_entry_set_text(main_entry, ch);

		}
		else
		{	
			gchar *ch;
			ch = g_strdup(enry_buf);
			g_strdelimit(ch,"-",' ');
			g_strstrip(ch);
			gtk_entry_set_text(main_entry, ch);
		}
}		
// обработка кнопки "x в квадрате" "x^2" **********************************************
void onBtnClickedX2(GtkButton * btn1, gpointer main_entry) {
	const gchar *enry_buf = gtk_entry_get_text(main_entry);
	char *ptrEnd;
	double d = strtod(enry_buf, &ptrEnd);
	d=d*d;
	char ch[strlen(enry_buf)*2];
	sprintf(ch,"%lf",d);
	if (g_str_has_suffix(ch, "0")==TRUE)
	{
		char *ch1 = g_strndup(ch, strlen(ch)-1);
		while (g_str_has_suffix(ch1, "0")==TRUE)
		{
			ch1 = g_strndup(ch1, strlen(ch1)-1);
		}
		if (g_str_has_suffix(ch1, ",")==TRUE | g_str_has_suffix(ch1, ".")==TRUE)
		{
			ch1 = g_strndup(ch1, strlen(ch1)-1);
			gtk_entry_set_text(main_entry, ch1);
		}
		else
			gtk_entry_set_text(main_entry, ch1);
	}
	else
	{
		gtk_entry_set_text(main_entry, ch);
	}
}
	// обработка кнопки "Деление на х" "1/x" **********************************************
void onBtnClicked1DivX(GtkButton * btn1, gpointer main_entry) {
	const gchar *enry_buf = gtk_entry_get_text(main_entry);
	char *ptrEnd;
	double d = strtod(enry_buf, &ptrEnd);
	if (d==0)
		gtk_entry_set_text(main_entry, "Деление на 0");
	else
	{
		d=1/d;
		char ch[strlen(enry_buf)*2];
		sprintf(ch,"%lf",d);
		if (g_str_has_suffix(ch, "0")==TRUE)
		{
			char *ch1 = g_strndup(ch, strlen(ch)-1);
			while (g_str_has_suffix(ch1, "0")==TRUE)
			{
				ch1 = g_strndup(ch1, strlen(ch1)-1);
			}
			if (g_str_has_suffix(ch1, ",")==TRUE | g_str_has_suffix(ch1, ".")==TRUE)
			{
				ch1 = g_strndup(ch1, strlen(ch1)-1);
				gtk_entry_set_text(main_entry, ch1);
			}
			else
				gtk_entry_set_text(main_entry, ch1);
		}
		else
		{
			gtk_entry_set_text(main_entry, ch);
		}
	}	
}
// обработка кнопки "Извлечение корня из х" "sqr" **********************************************
void onBtnClickedSQR(GtkButton * btn1, gpointer main_entry) {
	const gchar *enry_buf = gtk_entry_get_text(main_entry);
	char *ptrEnd;
	double d = strtod(enry_buf, &ptrEnd);
	if (d<0)
		gtk_entry_set_text(main_entry, "Не корр. ввод");
	else
	{
		d=sqrt(d);
		char ch[strlen(enry_buf)*2];
		sprintf(ch,"%lf",d);
		if (g_str_has_suffix(ch, "0")==TRUE)
		{
			char *ch1 = g_strndup(ch, strlen(ch)-1);
			while (g_str_has_suffix(ch1, "0")==TRUE)
			{
				ch1 = g_strndup(ch1, strlen(ch1)-1);
			}
			if (g_str_has_suffix(ch1, ",")==TRUE | g_str_has_suffix(ch1, ".")==TRUE)
			{
				ch1 = g_strndup(ch1, strlen(ch1)-1);
				gtk_entry_set_text(main_entry, ch1);
			}
			else
				gtk_entry_set_text(main_entry, ch1);
		}
		else
		{
			gtk_entry_set_text(main_entry, ch);
		}
	}
}
// обработка кнопки "расчет %" "%" **********************************************
void onBtnClickedPercent(GtkButton * btn1, gpointer main_entry) {
	const gchar *enry_buf = gtk_entry_get_text(main_entry);
	if (g_strstr_len(enry_buf, strlen(enry_buf), "+")!=NULL | (g_strstr_len(enry_buf, strlen(enry_buf), "-")!=NULL & g_str_has_prefix(enry_buf, "-")==FALSE) | g_strstr_len(enry_buf, strlen(enry_buf), "*")!=NULL | g_strstr_len(enry_buf, strlen(enry_buf), "/")!=NULL)
	{
		if (g_str_has_suffix(enry_buf, "-")==TRUE | g_str_has_suffix(enry_buf, "*")==TRUE | g_str_has_suffix(enry_buf, "/")==TRUE | g_str_has_suffix(enry_buf, "+")==TRUE)
		{
			gtk_entry_set_text(main_entry, enry_buf);
		}
		else 
		{
			double d1, d2, d;
			char c;
			sscanf(enry_buf, "%lf%c%lf",&d1,&c,&d2);
			if (c=='+')
			{
					d = d1+d1*d2/100;
					char ch[strlen(enry_buf)+1];
					sprintf(ch,"%lf",d);
					if (g_str_has_suffix(ch, "0")==TRUE)
					{
						char *ch1 = g_strndup(ch, strlen(ch)-1);
						while (g_str_has_suffix(ch1, "0")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
						}
						if (g_str_has_suffix(ch1, ",")==TRUE | g_str_has_suffix(ch1, ".")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
							gtk_entry_set_text(main_entry, ch1);
						}
						else {
							gtk_entry_set_text(main_entry, ch1);
						}
					}
					else {
						gtk_entry_set_text(main_entry, ch);
					}
			}
			else if (c=='-')
			{
					d = d1-d1*d2/100;
					char ch[strlen(enry_buf)+1];
					sprintf(ch,"%lf",d);
										if (g_str_has_suffix(ch, "0")==TRUE)
					{
						char *ch1 = g_strndup(ch, strlen(ch)-1);
						while (g_str_has_suffix(ch1, "0")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
						}
						if (g_str_has_suffix(ch1, ",")==TRUE | g_str_has_suffix(ch1, ".")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
							gtk_entry_set_text(main_entry, ch1);
						}
						else {
							gtk_entry_set_text(main_entry, ch1);
						}
					}
					else {
						gtk_entry_set_text(main_entry, ch);
					}
			}
			else if (c=='*')
			{
					d = d1*d1*d2/100;
					char ch[strlen(enry_buf)+1];
					sprintf(ch,"%lf",d);
										if (g_str_has_suffix(ch, "0")==TRUE)
					{
						char *ch1 = g_strndup(ch, strlen(ch)-1);
						while (g_str_has_suffix(ch1, "0")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
						}
						if (g_str_has_suffix(ch1, ",")==TRUE | g_str_has_suffix(ch1, ".")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
							gtk_entry_set_text(main_entry, ch1);
						}
						else {
							gtk_entry_set_text(main_entry, ch1);
						}
					}
					else {
						gtk_entry_set_text(main_entry, ch);
					}
			}
			else if (c=='/')
			{
					d = d1/(d1*d2/100);
					char ch[strlen(enry_buf)+1];
					sprintf(ch,"%lf",d);
										if (g_str_has_suffix(ch, "0")==TRUE)
					{
						char *ch1 = g_strndup(ch, strlen(ch)-1);
						while (g_str_has_suffix(ch1, "0")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
						}
						if (g_str_has_suffix(ch1, ",")==TRUE | g_str_has_suffix(ch1, ".")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
							gtk_entry_set_text(main_entry, ch1);
						}
						else {
							gtk_entry_set_text(main_entry, ch1);
						}
					}
					else {
						gtk_entry_set_text(main_entry, ch);
					}
			}

		}
	}
	else
	{
		gtk_entry_set_text(main_entry, enry_buf);
	}
}
// обработка кнопки "Сложение" "+" **********************************************
void onBtnClickedPlus(GtkButton * btn1, gpointer main_entry) {
	const gchar *enry_buf = gtk_entry_get_text(main_entry);
	const char znak = '+';
	if (g_strstr_len(enry_buf, strlen(enry_buf), "+")!=NULL | (g_strstr_len(enry_buf, strlen(enry_buf), "-")!=NULL & g_str_has_prefix(enry_buf, "-")==FALSE) | g_strstr_len(enry_buf, strlen(enry_buf), "*")!=NULL | g_strstr_len(enry_buf, strlen(enry_buf), "/")!=NULL)
	{
		if (g_str_has_suffix(enry_buf, "-")==TRUE | g_str_has_suffix(enry_buf, "*")==TRUE | g_str_has_suffix(enry_buf, "/")==TRUE | g_str_has_suffix(enry_buf, "+")==TRUE)
		{
			char *ch = g_strndup(enry_buf, strlen(enry_buf)-1);
			char ch1[strlen(ch)+1];
			sprintf(ch1,"%s%c",ch,znak);
			gtk_entry_set_text(main_entry, ch1);
		}
		else 
		{
			double d1, d2, d;
			char c;
			//gchar *ch;
			//g_strdelimit(ch,",",'.');
			sscanf(enry_buf, "%lf%c%lf",&d1,&c,&d2);
			//d = d1+d2;
			//char ch[strlen(enry_buf)+1];
			//sprintf(ch,"%lf%c",d,c);
			//gtk_entry_set_text(main_entry, ch);
			if (c=='+')
			{
					d = d1+d2;
					char ch[strlen(enry_buf)+1];
					sprintf(ch,"%lf",d);
					if (g_str_has_suffix(ch, "0")==TRUE)
					{
						char *ch1 = g_strndup(ch, strlen(ch)-1);
						while (g_str_has_suffix(ch1, "0")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
						}
						if (g_str_has_suffix(ch1, ",")==TRUE | g_str_has_suffix(ch1, ".")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
							char ch2[strlen(ch1)+1];
							sprintf(ch2,"%s%c",ch1,znak);
							gtk_entry_set_text(main_entry, ch2);
						}
						else {
							char ch2[strlen(ch1)+1];
							sprintf(ch2,"%s%c",ch1,znak);
							gtk_entry_set_text(main_entry, ch2);
						}
					}
					else {
						char *ch1 = g_strndup(ch, strlen(ch)+1);
						sprintf(ch1,"%s%c",ch,znak);
						gtk_entry_set_text(main_entry, ch1);
					}
			}
			else if (c=='-')
			{
					d = d1-d2;
					char ch[strlen(enry_buf)+1];
					sprintf(ch,"%lf",d);
					if (g_str_has_suffix(ch, "0")==TRUE)
					{
						char *ch1 = g_strndup(ch, strlen(ch)-1);
						while (g_str_has_suffix(ch1, "0")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
						}
						if (g_str_has_suffix(ch1, ",")==TRUE | g_str_has_suffix(ch1, ".")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
							char ch2[strlen(ch1)+1];
							sprintf(ch2,"%s%c",ch1,znak);
							gtk_entry_set_text(main_entry, ch2);
						}
						else {
							char ch2[strlen(ch1)+1];
							sprintf(ch2,"%s%c",ch1,znak);
							gtk_entry_set_text(main_entry, ch2);
						}
					}
					else {
						char *ch1 = g_strndup(ch, strlen(ch)+1);
						sprintf(ch1,"%s%c",ch,znak);
						gtk_entry_set_text(main_entry, ch1);
					}
			}
			else if (c=='*')
			{
					d = d1*d2;
					char ch[strlen(enry_buf)+1];
					sprintf(ch,"%lf",d);
					if (g_str_has_suffix(ch, "0")==TRUE)
					{
						char *ch1 = g_strndup(ch, strlen(ch)-1);
						while (g_str_has_suffix(ch1, "0")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
						}
						if (g_str_has_suffix(ch1, ",")==TRUE | g_str_has_suffix(ch1, ".")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
							char ch2[strlen(ch1)+1];
							sprintf(ch2,"%s%c",ch1,znak);
							gtk_entry_set_text(main_entry, ch2);
						}
						else {
							char ch2[strlen(ch1)+1];
							sprintf(ch2,"%s%c",ch1,'+');
							gtk_entry_set_text(main_entry, ch2);
						}
					}
					else {
						char *ch1 = g_strndup(ch, strlen(ch)+1);
						sprintf(ch1,"%s%c",ch,znak);
						gtk_entry_set_text(main_entry, ch1);
					}
			}
			else if (c=='/')
			{
					d = d1/d2;
					char ch[strlen(enry_buf)+1];
					sprintf(ch,"%lf",d);
					if (g_str_has_suffix(ch, "0")==TRUE)
					{
						char *ch1 = g_strndup(ch, strlen(ch)-1);
						while (g_str_has_suffix(ch1, "0")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
						}
						if (g_str_has_suffix(ch1, ",")==TRUE | g_str_has_suffix(ch1, ".")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
							char ch2[strlen(ch1)+1];
							sprintf(ch2,"%s%c",ch1,znak);
							gtk_entry_set_text(main_entry, ch2);
						}
						else {
							char ch2[strlen(ch1)+1];
							sprintf(ch2,"%s%c",ch1,znak);
							gtk_entry_set_text(main_entry, ch2);
						}
					}
					else {
						char *ch1 = g_strndup(ch, strlen(ch)+1);
						sprintf(ch1,"%s%c",ch,znak);
						gtk_entry_set_text(main_entry, ch1);
					}
			}

		}
	}
	else
	{
		char ch1[strlen(enry_buf)+1];
		sprintf(ch1,"%s%c",enry_buf,znak);
		gtk_entry_set_text(main_entry, ch1);
	}
}
// обработка кнопки "Вычитание" "-" **********************************************
void onBtnClickedMinus(GtkButton * btn1, gpointer main_entry) {
	const gchar *enry_buf = gtk_entry_get_text(main_entry);
	const char znak = '-';
	if (g_strstr_len(enry_buf, strlen(enry_buf), "+")!=NULL | (g_strstr_len(enry_buf, strlen(enry_buf), "-")!=NULL & g_str_has_prefix(enry_buf, "-")==FALSE) | g_strstr_len(enry_buf, strlen(enry_buf), "*")!=NULL | g_strstr_len(enry_buf, strlen(enry_buf), "/")!=NULL)
	{
		if (g_str_has_suffix(enry_buf, "-")==TRUE | g_str_has_suffix(enry_buf, "*")==TRUE | g_str_has_suffix(enry_buf, "/")==TRUE | g_str_has_suffix(enry_buf, "+")==TRUE)
		{
			char *ch = g_strndup(enry_buf, strlen(enry_buf)-1);
			char ch1[strlen(ch)+1];
			sprintf(ch1,"%s%c",ch,znak);
			gtk_entry_set_text(main_entry, ch1);
		}
		else 
		{
			double d1, d2, d;
			char c;
			//gchar *ch;
			//g_strdelimit(ch,",",'.');
			sscanf(enry_buf, "%lf%c%lf",&d1,&c,&d2);
			//d = d1+d2;
			//char ch[strlen(enry_buf)+1];
			//sprintf(ch,"%lf%c",d,c);
			//gtk_entry_set_text(main_entry, ch);
			if (c=='+')
			{
					d = d1+d2;
					char ch[strlen(enry_buf)+1];
					sprintf(ch,"%lf",d);
					if (g_str_has_suffix(ch, "0")==TRUE)
					{
						char *ch1 = g_strndup(ch, strlen(ch)-1);
						while (g_str_has_suffix(ch1, "0")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
						}
						if (g_str_has_suffix(ch1, ",")==TRUE | g_str_has_suffix(ch1, ".")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
							char ch2[strlen(ch1)+1];
							sprintf(ch2,"%s%c",ch1,znak);
							gtk_entry_set_text(main_entry, ch2);
						}
						else {
							char ch2[strlen(ch1)+1];
							sprintf(ch2,"%s%c",ch1,znak);
							gtk_entry_set_text(main_entry, ch2);
						}
					}
					else {
						char *ch1 = g_strndup(ch, strlen(ch)+1);
						sprintf(ch1,"%s%c",ch,znak);
						gtk_entry_set_text(main_entry, ch1);
					}
			}
			else if (c=='-')
			{
					d = d1-d2;
					char ch[strlen(enry_buf)+1];
					sprintf(ch,"%lf",d);
					if (g_str_has_suffix(ch, "0")==TRUE)
					{
						char *ch1 = g_strndup(ch, strlen(ch)-1);
						while (g_str_has_suffix(ch1, "0")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
						}
						if (g_str_has_suffix(ch1, ",")==TRUE | g_str_has_suffix(ch1, ".")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
							char ch2[strlen(ch1)+1];
							sprintf(ch2,"%s%c",ch1,znak);
							gtk_entry_set_text(main_entry, ch2);
						}
						else {
							char ch2[strlen(ch1)+1];
							sprintf(ch2,"%s%c",ch1,znak);
							gtk_entry_set_text(main_entry, ch2);
						}
					}
					else {
						char *ch1 = g_strndup(ch, strlen(ch)+1);
						sprintf(ch1,"%s%c",ch,znak);
						gtk_entry_set_text(main_entry, ch1);
					}
			}
			else if (c=='*')
			{
					d = d1*d2;
					char ch[strlen(enry_buf)+1];
					sprintf(ch,"%lf",d);
					if (g_str_has_suffix(ch, "0")==TRUE)
					{
						char *ch1 = g_strndup(ch, strlen(ch)-1);
						while (g_str_has_suffix(ch1, "0")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
						}
						if (g_str_has_suffix(ch1, ",")==TRUE | g_str_has_suffix(ch1, ".")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
							char ch2[strlen(ch1)+1];
							sprintf(ch2,"%s%c",ch1,znak);
							gtk_entry_set_text(main_entry, ch2);
						}
						else {
							char ch2[strlen(ch1)+1];
							sprintf(ch2,"%s%c",ch1,'+');
							gtk_entry_set_text(main_entry, ch2);
						}
					}
					else {
						char *ch1 = g_strndup(ch, strlen(ch)+1);
						sprintf(ch1,"%s%c",ch,znak);
						gtk_entry_set_text(main_entry, ch1);
					}
			}
			else if (c=='/')
			{
					d = d1/d2;
					char ch[strlen(enry_buf)+1];
					sprintf(ch,"%lf",d);
					if (g_str_has_suffix(ch, "0")==TRUE)
					{
						char *ch1 = g_strndup(ch, strlen(ch)-1);
						while (g_str_has_suffix(ch1, "0")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
						}
						if (g_str_has_suffix(ch1, ",")==TRUE | g_str_has_suffix(ch1, ".")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
							char ch2[strlen(ch1)+1];
							sprintf(ch2,"%s%c",ch1,znak);
							gtk_entry_set_text(main_entry, ch2);
						}
						else {
							char ch2[strlen(ch1)+1];
							sprintf(ch2,"%s%c",ch1,znak);
							gtk_entry_set_text(main_entry, ch2);
						}
					}
					else {
						char *ch1 = g_strndup(ch, strlen(ch)+1);
						sprintf(ch1,"%s%c",ch,znak);
						gtk_entry_set_text(main_entry, ch1);
					}
			}

		}
	}
	else
	{
		char ch1[strlen(enry_buf)+1];
		sprintf(ch1,"%s%c",enry_buf,znak);
		gtk_entry_set_text(main_entry, ch1);
	}
}
// обработка кнопки "Умножение" "*" **********************************************
void onBtnClickedMult(GtkButton * btn1, gpointer main_entry) {
	const gchar *enry_buf = gtk_entry_get_text(main_entry);
	const char znak = '*';
	if (g_strstr_len(enry_buf, strlen(enry_buf), "+")!=NULL | (g_strstr_len(enry_buf, strlen(enry_buf), "-")!=NULL & g_str_has_prefix(enry_buf, "-")==FALSE) | g_strstr_len(enry_buf, strlen(enry_buf), "*")!=NULL | g_strstr_len(enry_buf, strlen(enry_buf), "/")!=NULL)
	{
		if (g_str_has_suffix(enry_buf, "-")==TRUE | g_str_has_suffix(enry_buf, "*")==TRUE | g_str_has_suffix(enry_buf, "/")==TRUE | g_str_has_suffix(enry_buf, "+")==TRUE)
		{
			char *ch = g_strndup(enry_buf, strlen(enry_buf)-1);
			char ch1[strlen(ch)+1];
			sprintf(ch1,"%s%c",ch,znak);
			gtk_entry_set_text(main_entry, ch1);
		}
		else 
		{
			double d1, d2, d;
			char c;
			//gchar *ch;
			//g_strdelimit(ch,",",'.');
			sscanf(enry_buf, "%lf%c%lf",&d1,&c,&d2);
			//d = d1+d2;
			//char ch[strlen(enry_buf)+1];
			//sprintf(ch,"%lf%c",d,c);
			//gtk_entry_set_text(main_entry, ch);
			if (c=='+')
			{
					d = d1+d2;
					char ch[strlen(enry_buf)+1];
					sprintf(ch,"%lf",d);
					if (g_str_has_suffix(ch, "0")==TRUE)
					{
						char *ch1 = g_strndup(ch, strlen(ch)-1);
						while (g_str_has_suffix(ch1, "0")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
						}
						if (g_str_has_suffix(ch1, ",")==TRUE | g_str_has_suffix(ch1, ".")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
							char ch2[strlen(ch1)+1];
							sprintf(ch2,"%s%c",ch1,znak);
							gtk_entry_set_text(main_entry, ch2);
						}
						else {
							char ch2[strlen(ch1)+1];
							sprintf(ch2,"%s%c",ch1,znak);
							gtk_entry_set_text(main_entry, ch2);
						}
					}
					else {
						char *ch1 = g_strndup(ch, strlen(ch)+1);
						sprintf(ch1,"%s%c",ch,znak);
						gtk_entry_set_text(main_entry, ch1);
					}
			}
			else if (c=='-')
			{
					d = d1-d2;
					char ch[strlen(enry_buf)+1];
					sprintf(ch,"%lf",d);
					if (g_str_has_suffix(ch, "0")==TRUE)
					{
						char *ch1 = g_strndup(ch, strlen(ch)-1);
						while (g_str_has_suffix(ch1, "0")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
						}
						if (g_str_has_suffix(ch1, ",")==TRUE | g_str_has_suffix(ch1, ".")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
							char ch2[strlen(ch1)+1];
							sprintf(ch2,"%s%c",ch1,znak);
							gtk_entry_set_text(main_entry, ch2);
						}
						else {
							char ch2[strlen(ch1)+1];
							sprintf(ch2,"%s%c",ch1,znak);
							gtk_entry_set_text(main_entry, ch2);
						}
					}
					else {
						char *ch1 = g_strndup(ch, strlen(ch)+1);
						sprintf(ch1,"%s%c",ch,znak);
						gtk_entry_set_text(main_entry, ch1);
					}
			}
			else if (c=='*')
			{
					d = d1*d2;
					char ch[strlen(enry_buf)+1];
					sprintf(ch,"%lf",d);
					if (g_str_has_suffix(ch, "0")==TRUE)
					{
						char *ch1 = g_strndup(ch, strlen(ch)-1);
						while (g_str_has_suffix(ch1, "0")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
						}
						if (g_str_has_suffix(ch1, ",")==TRUE | g_str_has_suffix(ch1, ".")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
							char ch2[strlen(ch1)+1];
							sprintf(ch2,"%s%c",ch1,znak);
							gtk_entry_set_text(main_entry, ch2);
						}
						else {
							char ch2[strlen(ch1)+1];
							sprintf(ch2,"%s%c",ch1,'+');
							gtk_entry_set_text(main_entry, ch2);
						}
					}
					else {
						char *ch1 = g_strndup(ch, strlen(ch)+1);
						sprintf(ch1,"%s%c",ch,znak);
						gtk_entry_set_text(main_entry, ch1);
					}
			}
			else if (c=='/')
			{
					d = d1/d2;
					char ch[strlen(enry_buf)+1];
					sprintf(ch,"%lf",d);
					if (g_str_has_suffix(ch, "0")==TRUE)
					{
						char *ch1 = g_strndup(ch, strlen(ch)-1);
						while (g_str_has_suffix(ch1, "0")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
						}
						if (g_str_has_suffix(ch1, ",")==TRUE | g_str_has_suffix(ch1, ".")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
							char ch2[strlen(ch1)+1];
							sprintf(ch2,"%s%c",ch1,znak);
							gtk_entry_set_text(main_entry, ch2);
						}
						else {
							char ch2[strlen(ch1)+1];
							sprintf(ch2,"%s%c",ch1,znak);
							gtk_entry_set_text(main_entry, ch2);
						}
					}
					else {
						char *ch1 = g_strndup(ch, strlen(ch)+1);
						sprintf(ch1,"%s%c",ch,znak);
						gtk_entry_set_text(main_entry, ch1);
					}
			}

		}
	}
	else
	{
		char ch1[strlen(enry_buf)+1];
		sprintf(ch1,"%s%c",enry_buf,znak);
		gtk_entry_set_text(main_entry, ch1);
	}
}
// обработка кнопки "Деление" "/" **********************************************
void onBtnClickedDiv(GtkButton * btn1, gpointer main_entry) {
	const gchar *enry_buf = gtk_entry_get_text(main_entry);
	const char znak = '/';
	if (g_strstr_len(enry_buf, strlen(enry_buf), "+")!=NULL | (g_strstr_len(enry_buf, strlen(enry_buf), "-")!=NULL & g_str_has_prefix(enry_buf, "-")==FALSE) | g_strstr_len(enry_buf, strlen(enry_buf), "*")!=NULL | g_strstr_len(enry_buf, strlen(enry_buf), "/")!=NULL)
	{
		if (g_str_has_suffix(enry_buf, "-")==TRUE | g_str_has_suffix(enry_buf, "*")==TRUE | g_str_has_suffix(enry_buf, "/")==TRUE | g_str_has_suffix(enry_buf, "+")==TRUE)
		{
			char *ch = g_strndup(enry_buf, strlen(enry_buf)-1);
			char ch1[strlen(ch)+1];
			sprintf(ch1,"%s%c",ch,znak);
			gtk_entry_set_text(main_entry, ch1);
		}
		else 
		{
			double d1, d2, d;
			char c;
			//gchar *ch;
			//g_strdelimit(ch,",",'.');
			sscanf(enry_buf, "%lf%c%lf",&d1,&c,&d2);
			//d = d1+d2;
			//char ch[strlen(enry_buf)+1];
			//sprintf(ch,"%lf%c",d,c);
			//gtk_entry_set_text(main_entry, ch);
			if (c=='+')
			{
					d = d1+d2;
					char ch[strlen(enry_buf)+1];
					sprintf(ch,"%lf",d);
					if (g_str_has_suffix(ch, "0")==TRUE)
					{
						char *ch1 = g_strndup(ch, strlen(ch)-1);
						while (g_str_has_suffix(ch1, "0")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
						}
						if (g_str_has_suffix(ch1, ",")==TRUE | g_str_has_suffix(ch1, ".")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
							char ch2[strlen(ch1)+1];
							sprintf(ch2,"%s%c",ch1,znak);
							gtk_entry_set_text(main_entry, ch2);
						}
						else {
							char ch2[strlen(ch1)+1];
							sprintf(ch2,"%s%c",ch1,znak);
							gtk_entry_set_text(main_entry, ch2);
						}
					}
					else {
						char *ch1 = g_strndup(ch, strlen(ch)+1);
						sprintf(ch1,"%s%c",ch,znak);
						gtk_entry_set_text(main_entry, ch1);
					}
			}
			else if (c=='-')
			{
					d = d1-d2;
					char ch[strlen(enry_buf)+1];
					sprintf(ch,"%lf",d);
					if (g_str_has_suffix(ch, "0")==TRUE)
					{
						char *ch1 = g_strndup(ch, strlen(ch)-1);
						while (g_str_has_suffix(ch1, "0")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
						}
						if (g_str_has_suffix(ch1, ",")==TRUE | g_str_has_suffix(ch1, ".")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
							char ch2[strlen(ch1)+1];
							sprintf(ch2,"%s%c",ch1,znak);
							gtk_entry_set_text(main_entry, ch2);
						}
						else {
							char ch2[strlen(ch1)+1];
							sprintf(ch2,"%s%c",ch1,znak);
							gtk_entry_set_text(main_entry, ch2);
						}
					}
					else {
						char *ch1 = g_strndup(ch, strlen(ch)+1);
						sprintf(ch1,"%s%c",ch,znak);
						gtk_entry_set_text(main_entry, ch1);
					}
			}
			else if (c=='*')
			{
					d = d1*d2;
					char ch[strlen(enry_buf)+1];
					sprintf(ch,"%lf",d);
					if (g_str_has_suffix(ch, "0")==TRUE)
					{
						char *ch1 = g_strndup(ch, strlen(ch)-1);
						while (g_str_has_suffix(ch1, "0")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
						}
						if (g_str_has_suffix(ch1, ",")==TRUE | g_str_has_suffix(ch1, ".")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
							char ch2[strlen(ch1)+1];
							sprintf(ch2,"%s%c",ch1,znak);
							gtk_entry_set_text(main_entry, ch2);
						}
						else {
							char ch2[strlen(ch1)+1];
							sprintf(ch2,"%s%c",ch1,'+');
							gtk_entry_set_text(main_entry, ch2);
						}
					}
					else {
						char *ch1 = g_strndup(ch, strlen(ch)+1);
						sprintf(ch1,"%s%c",ch,znak);
						gtk_entry_set_text(main_entry, ch1);
					}
			}
			else if (c=='/')
			{
					d = d1/d2;
					char ch[strlen(enry_buf)+1];
					sprintf(ch,"%lf",d);
					if (g_str_has_suffix(ch, "0")==TRUE)
					{
						char *ch1 = g_strndup(ch, strlen(ch)-1);
						while (g_str_has_suffix(ch1, "0")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
						}
						if (g_str_has_suffix(ch1, ",")==TRUE | g_str_has_suffix(ch1, ".")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
							char ch2[strlen(ch1)+1];
							sprintf(ch2,"%s%c",ch1,znak);
							gtk_entry_set_text(main_entry, ch2);
						}
						else {
							char ch2[strlen(ch1)+1];
							sprintf(ch2,"%s%c",ch1,znak);
							gtk_entry_set_text(main_entry, ch2);
						}
					}
					else {
						char *ch1 = g_strndup(ch, strlen(ch)+1);
						sprintf(ch1,"%s%c",ch,znak);
						gtk_entry_set_text(main_entry, ch1);
					}
			}

		}
	}
	else
	{
		char ch1[strlen(enry_buf)+1];
		sprintf(ch1,"%s%c",enry_buf,znak);
		gtk_entry_set_text(main_entry, ch1);
	}
}
// обработка кнопки "Вычисление результата" "=" **********************************************
void onBtnClickedRezult(GtkButton * btn1, gpointer main_entry) {
	const gchar *enry_buf = gtk_entry_get_text(main_entry);
	if (g_strstr_len(enry_buf, strlen(enry_buf), "+")!=NULL | (g_strstr_len(enry_buf, strlen(enry_buf), "-")!=NULL & g_str_has_prefix(enry_buf, "-")==FALSE) | g_strstr_len(enry_buf, strlen(enry_buf), "*")!=NULL | g_strstr_len(enry_buf, strlen(enry_buf), "/")!=NULL)
	{
		if (g_str_has_suffix(enry_buf, "-")==TRUE | g_str_has_suffix(enry_buf, "*")==TRUE | g_str_has_suffix(enry_buf, "/")==TRUE | g_str_has_suffix(enry_buf, "+")==TRUE)
		{
			gtk_entry_set_text(main_entry, enry_buf);
		}
		else 
		{
			double d1, d2, d;
			char c;
			sscanf(enry_buf, "%lf%c%lf",&d1,&c,&d2);
			if (c=='+')
			{
					d = d1+d2;
					char ch[strlen(enry_buf)+1];
					sprintf(ch,"%lf",d);
					if (g_str_has_suffix(ch, "0")==TRUE)
					{
						char *ch1 = g_strndup(ch, strlen(ch)-1);
						while (g_str_has_suffix(ch1, "0")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
						}
						if (g_str_has_suffix(ch1, ",")==TRUE | g_str_has_suffix(ch1, ".")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
							gtk_entry_set_text(main_entry, ch1);
						}
						else {
							gtk_entry_set_text(main_entry, ch1);
						}
					}
					else {
						gtk_entry_set_text(main_entry, ch);
					}
			}
			else if (c=='-')
			{
					d = d1-d2;
					char ch[strlen(enry_buf)+1];
					sprintf(ch,"%lf",d);
										if (g_str_has_suffix(ch, "0")==TRUE)
					{
						char *ch1 = g_strndup(ch, strlen(ch)-1);
						while (g_str_has_suffix(ch1, "0")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
						}
						if (g_str_has_suffix(ch1, ",")==TRUE | g_str_has_suffix(ch1, ".")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
							gtk_entry_set_text(main_entry, ch1);
						}
						else {
							gtk_entry_set_text(main_entry, ch1);
						}
					}
					else {
						gtk_entry_set_text(main_entry, ch);
					}
			}
			else if (c=='*')
			{
					d = d1*d2;
					char ch[strlen(enry_buf)+1];
					sprintf(ch,"%lf",d);
										if (g_str_has_suffix(ch, "0")==TRUE)
					{
						char *ch1 = g_strndup(ch, strlen(ch)-1);
						while (g_str_has_suffix(ch1, "0")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
						}
						if (g_str_has_suffix(ch1, ",")==TRUE | g_str_has_suffix(ch1, ".")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
							gtk_entry_set_text(main_entry, ch1);
						}
						else {
							gtk_entry_set_text(main_entry, ch1);
						}
					}
					else {
						gtk_entry_set_text(main_entry, ch);
					}
			}
			else if (c=='/')
			{
					d = d1/d2;
					char ch[strlen(enry_buf)+1];
					sprintf(ch,"%lf",d);
										if (g_str_has_suffix(ch, "0")==TRUE)
					{
						char *ch1 = g_strndup(ch, strlen(ch)-1);
						while (g_str_has_suffix(ch1, "0")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
						}
						if (g_str_has_suffix(ch1, ",")==TRUE | g_str_has_suffix(ch1, ".")==TRUE)
						{
							ch1 = g_strndup(ch1, strlen(ch1)-1);
							gtk_entry_set_text(main_entry, ch1);
						}
						else {
							gtk_entry_set_text(main_entry, ch1);
						}
					}
					else {
						gtk_entry_set_text(main_entry, ch);
					}
			}

		}
	}
	else
	{
		gtk_entry_set_text(main_entry, enry_buf);
	}
}
// Dызов окна About
void onShowAboutWindow (GtkMenuItem *about_window, gpointer about) {
    gtk_widget_show_all (about);
}

// Закрытие окна About
void on_window2_delete_event (GtkWidget *about)
{	
gtk_widget_hide(about); // Подменяем уничтожение на сворачивание
}

// Слот выхода из программы  **********************************************
void onExit(GtkWidget * w) {
    gtk_main_quit();
}
