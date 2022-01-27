namespace A20200718_2
{
    partial class MainForm
    {
        /// <summary>
        /// 設計工具所需的變數。
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 清除任何使用中的資源。
        /// </summary>
        /// <param name="disposing">如果應該處置受控資源則為 true，否則為 false。</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form 設計工具產生的程式碼

        /// <summary>
        /// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
        /// 這個方法的內容。
        /// </summary>
        private void InitializeComponent()
        {
            this.lab_Test = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // lab_Test
            // 
            this.lab_Test.AutoSize = true;
            this.lab_Test.Location = new System.Drawing.Point(55, 30);
            this.lab_Test.Name = "lab_Test";
            this.lab_Test.Size = new System.Drawing.Size(67, 18);
            this.lab_Test.TabIndex = 0;
            this.lab_Test.Text = "lab_Test";
            // 
            // MainForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(9F, 18F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.lab_Test);
            this.Name = "MainForm";
            this.Text = "個人基本資料";
            this.Load += new System.EventHandler(this.MainForm_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label lab_Test;
    }
}

