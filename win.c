#include <gtk/gtk.h>

static void activate (GtkApplication *app, gpointer user_data)
{
  GtkWidget *window;
  window = gtk_window_new(GTK_WINDOW_TOPLEVEL);

  gtk_window_set_application(GTK_WINDOW(window), GTK_APPLICATION(app));
  gtk_window_set_title(GTK_WINDOW(window), "Hola GNOME");

  gtk_widget_show_all(GTK_WIDGET(window));
}

int main(int argc, char **argv)
{
  GtkApplication *app;
  int status;

  app = gtk_application_new("org.gtk.example", G_APPLICATION_FLAGS_NONE);
  g_signal_connect(app, "activate", G_CALLBACK(activate), NULL);
  status = g_application_run(G_APPLICATION(app), argc, argv);
  g_object_unref(app);
  return status;
}
