namespace GuessingGame_Pretest
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            

        }

        Random random = new Random();
        string[] Word = new string[5] { "Nicole", "Kyle", "Clayton", "Jason", "Wynand" };
      


        private void Form1_Load(object sender, EventArgs e)
        {

            //string s = Word[random.Next(4)];

            // char FirstLetter = s[1];
            //lblSecretWord.Text = FirstLetter.ToString();

        }

        private void btnStartGame_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Game has started");
            btnCheckWord.Enabled = true;
            txtGuessWord.Enabled = true;
            lblstart.Text = "Guess the word!";

            string s = Word[random.Next(4)];

            char FirstLetter = s[0];
            lblSecretWord.Text = FirstLetter.ToString();

            
        }

        
        private void btnCheckWord_Click(object sender, EventArgs e)
        {
            
            char FirstLetter = s[0];
            lblSecretWord.Text = FirstLetter.ToString();

            if (txtGuessWord.Text == "Clayton")
            {
                MessageBox.Show("Word is Correct");
            }
            else
            {
                MessageBox.Show("Word is incorrect");
                char SecondLetter = s[1];
                lblSecretWord.Text = (FirstLetter.ToString() + SecondLetter.ToString());
            }

        }

        private void txtGuessWord_TextChanged(object sender, EventArgs e)
        {

        }

        private void lblSecretWord_Click(object sender, EventArgs e)
        {
            
        }
    }
}