namespace Twitter__App_only_auth____Vozidea.com
{
    partial class Form1
    {
        /// <summary>
        /// Variable del diseñador requerida.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Limpiar los recursos que se estén utilizando.
        /// </summary>
        /// <param name="disposing">true si los recursos administrados se deben eliminar; false en caso contrario, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Código generado por el Diseñador de Windows Forms

        /// <summary>
        /// Método necesario para admitir el Diseñador. No se puede modificar
        /// el contenido del método con el editor de código.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            this.MiPuertoSerial = new System.IO.Ports.SerialPort(this.components);
            this.timer1 = new System.Windows.Forms.Timer(this.components);
            this.textBox_json = new System.Windows.Forms.TextBox();
            this.Inicio = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // timer1
            // 
            this.timer1.Interval = 6000;
            this.timer1.Tick += new System.EventHandler(this.timer1_Tick);
            // 
            // textBox_json
            // 
            this.textBox_json.BackColor = System.Drawing.SystemColors.GradientInactiveCaption;
            this.textBox_json.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.textBox_json.ForeColor = System.Drawing.SystemColors.InactiveCaptionText;
            this.textBox_json.Location = new System.Drawing.Point(335, 292);
            this.textBox_json.Multiline = true;
            this.textBox_json.Name = "textBox_json";
            this.textBox_json.Size = new System.Drawing.Size(135, 35);
            this.textBox_json.TabIndex = 5;
            // 
            // Inicio
            // 
            this.Inicio.AllowDrop = true;
            this.Inicio.AutoSize = true;
            this.Inicio.BackColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.Inicio.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Center;
            this.Inicio.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Inicio.ForeColor = System.Drawing.SystemColors.MenuHighlight;
            this.Inicio.Location = new System.Drawing.Point(345, 251);
            this.Inicio.Name = "Inicio";
            this.Inicio.Size = new System.Drawing.Size(112, 35);
            this.Inicio.TabIndex = 4;
            this.Inicio.Text = "GO!";
            this.Inicio.UseVisualStyleBackColor = false;
            this.Inicio.Click += new System.EventHandler(this.Inicio_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackgroundImage = global::Twitter__App_only_auth____Vozidea.com.Properties.Resources.images__7_;
            this.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.ClientSize = new System.Drawing.Size(469, 329);
            this.Controls.Add(this.textBox_json);
            this.Controls.Add(this.Inicio);
            this.ForeColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.Name = "Form1";
            this.Text = "Twitter ";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.IO.Ports.SerialPort MiPuertoSerial;
        private System.Windows.Forms.Timer timer1;
        private System.Windows.Forms.TextBox textBox_json;
        private System.Windows.Forms.Button Inicio;
    }
}

