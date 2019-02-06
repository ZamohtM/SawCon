using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace FormAnwendung1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }


        private void btnMalZwei_Click(object sender, EventArgs e)
        {
            int zahl;
            String ausgabe;

            //einlesen
            zahl = Convert.ToInt16(txtZahl.Text);

            //verarbeiten
            ausgabe = "Das Doppelte von " + zahl + " ist : " + (zahl * 2);

            //ausgeben
            lblAusgabe.Text = ausgabe;
        }

        private void lblJump_MouseEnter(object sender, EventArgs e)
        {
            int x = lblJump.Location.X - (lblJump.Width + 10);
            int y = lblJump.Location.Y - (lblJump.Height + 10);

            if (x <= 0) x = this.ClientSize.Width - lblJump.Width;
            if (y <= 0) x = this.ClientSize.Height - lblJump.Height;

            lblJump.Location = new Point(x,y);
        }


        private void btn5_Click(object sender, EventArgs e)
        {
            Graphics g = picFäden.CreateGraphics();
            Pen p = new Pen(Color.FromArgb(150, 255,0,0),2.5f);

            int breite = picFäden.ClientSize.Width;
            int höhe = picFäden.ClientSize.Height;
            int anzahlFäden = Convert.ToInt32(txt5.Text);

            double deltaX = breite / (double)anzahlFäden;
            double deltaY = höhe / (double)anzahlFäden;

            int x1, y1, x2, y2;

            g.Clear(picFäden.BackColor);

            x1 = 0;
            y2 = höhe;

            for (int i = 0; i < anzahlFäden; i++)
            {
                y1 = (int)(i * deltaY);
                x2 = (int)((i + 1) * deltaX);
                g.DrawLine(p, x1, y1, x2, y2);
            }


            x1 = breite;
            y2 = 0;

            for (int i = 0; i < anzahlFäden; i++)
            {
                y1 = (int)(i * deltaY);
                x2 = (int)((i + 1) * deltaX);
                g.DrawLine(p, x1, y1, x2, y2);
            }


            x2 = breite;
            y1 = höhe;

            for (int i = 0; i < anzahlFäden; i++)
            {
                y2 = höhe - (int)((i + 1) * deltaY);
                x1 = (int)((i) * deltaX);
                g.DrawLine(p, x1, y1, x2, y2);
            }

            x2 = 0;
            y1 = 0;

            for (int i = 0; i < anzahlFäden; i++)
            {
                y2 = höhe - (int)((i + 1) * deltaY);
                x1 = (int)((i) * deltaX);
                g.DrawLine(p, x1, y1, x2, y2);
            }

        }
    }
}
