using System.Collections.Generic;
using System.Linq;
using System.Windows;

namespace Gui
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
        }

        private void Button_Click_1(object sender, RoutedEventArgs e)
        {
            List<string> list = new List<string> { "foo", "bar", "baz" };
            SharedLibWrapper.CSharedLib_work(list.Select(i => i.ToString()).ToArray(), (uint) list.Count);
            SharedLibWrapper.CSharedLib_work2("hello world");
        }
    }
}
