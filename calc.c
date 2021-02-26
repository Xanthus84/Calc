#include <gtk/gtk.h>
#include <string.h>
#include <stdlib.h>
#include "calc_function.h"

/* создание окна в этот раз мы вынесли в отдельную функцию */
static GtkWidget*
create_window (void)
{
        /* это виджет окна */
        GtkWidget *window;
        /* это тот волшебный объект, который сделает за нас окошко */
        GtkBuilder *builder;
        /* сюда будем складывать ошибки */
        GError* error = NULL;

        /* тут загружаем файл с интерфейсом */
        builder = gtk_builder_new ();
        if (!gtk_builder_add_from_file (builder, "Calc_design.glade", &error))
        {
                /* загрузить файл не удалось */
                g_critical ("Не могу загрузить файл: %s", error->message);
                g_error_free (error);
        }

        /* помните, мы подключали сигналы вручную? теперь это происходит автоматически! */
        gtk_builder_connect_signals (builder, NULL);

        /* получаем виджет окна, чтобы его показать */
        window = GTK_WIDGET (gtk_builder_get_object (builder, "main_window"));
        if (!window)
        {
                /* что-то не так, наверное, ошиблись в имени */
                g_critical ("Ошибка при получении виджета окна");
        }
        g_object_unref (builder);

        return window;
}
static GtkWidget*
create_window1 (void)
{
        /* это виджет окна */
        GtkWidget *window1;
        /* это тот волшебный объект, который сделает за нас окошко */
        GtkBuilder *builder;
        /* сюда будем складывать ошибки */
        GError* error = NULL;

        /* тут загружаем файл с интерфейсом */
        builder = gtk_builder_new ();
        if (!gtk_builder_add_from_file (builder, "Calc_design.glade", &error))
        {
                /* загрузить файл не удалось */
                g_critical ("Не могу загрузить файл: %s", error->message);
                g_error_free (error);
        }

        /* помните, мы подключали сигналы вручную? теперь это происходит автоматически! */
        gtk_builder_connect_signals (builder, NULL);

        /* получаем виджет окна, чтобы его показать */
        window1 = GTK_WIDGET (gtk_builder_get_object (builder, "about"));
        if (!window1)
        {
                /* что-то не так, наверное, ошиблись в имени */
                g_critical ("Ошибка при получении виджета окна");
        }
        g_object_unref (builder);

        return window1;
}
/* это главная функция нашего приложения, которая будет выполнена первой */
int main (int argc, char *argv[])
{
        /* виджет окна */
        GtkWidget *window;
		GtkWidget *about;
        /* запускаем GTK+ */
        gtk_init (&argc, &argv);

        /* вызываем нашу функцию для создания окна */
        window = create_window ();
        about = create_window1 ();
        gtk_widget_show (window);
		//gtk_widget_show (about);
        /* передаём управление GTK+ */
        gtk_main ();
        return 0;
}
