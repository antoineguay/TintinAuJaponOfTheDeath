using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace SpaceBattle
{
    class Class1
    {
        private void lilili(object sender, RoutedEventArgs e)
        {
            // Création du TextBlock
            TextBlock tblock = new TextBlock();
            tblock.Text = "Hello le SDZ";

            // Ajout du contrôle à la fentre
            this.Content = tblock;
        }
    }
}
