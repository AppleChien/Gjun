using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace A20200718_2
{
    public partial class MainForm : Form
    {
        public MainForm()
        {
            InitializeComponent();
        }

        private void MainForm_Load(object sender, EventArgs e)
        {
            lab_Test.Text = "姓名:";
            lab_Test.BorderStyle = BorderStyle.Fixed3D;
            lab_Test.ForeColor = Color.Blue;
            lab_Test.BackColor = Color.White;
        }
    }
}
