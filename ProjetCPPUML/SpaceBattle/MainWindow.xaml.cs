using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace SpaceBattle
{
    /// <summary>
    /// Logique d'interaction pour MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
        }

        private void Credits_Clicked(object sender, MouseEventArgs e)
        {
            Button boutonCredits = (Button)sender;
            boutonCredits.Background = new ImageBrush(new BitmapImage(
                    new Uri(@"..\..\Images\bouton_clique.jpg", UriKind.Relative)
                ));
        }

        private void montrerCredits(object sender, RoutedEventArgs e)
        {
           boutonsAccueil.Visibility = Visibility.Collapsed;
            
        }

    }
}
