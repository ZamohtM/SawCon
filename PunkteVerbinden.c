using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Collections;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace PunkteVerbinden
{
    public partial class Form1 : Form
    {
        Pen p;
        Graphics g;
        ArrayList punkte;

        public Form1()
        {
            InitializeComponent();
            Init();
            
        }

        public void Init()
        {
            p = new Pen(Color.FromArgb(150, 255, 0, 0), 2.5f);
            g = this.CreateGraphics();
            punkte = new ArrayList();
            
        }

        private void Form1_MouseClick(object sender, MouseEventArgs e)
        {
            punkte.Add(new Point(e.X, e.Y));
            if (punkte.Count > 2)
            {

                g.Clear(this.BackColor);

                for (int i = 0; i < punkte.Count - 1; i++)
                {
                    g.DrawLine(p, (Point)punkte[i], (Point)punkte[i + 1]);
                }
                g.DrawLine(p, (Point)punkte[punkte.Count - 1], (Point)punkte[0]);
            }
        }
    }
}
