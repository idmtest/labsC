using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;
using System.Net;
using Newtonsoft.Json;

namespace testmytest
{
	
	
	public partial class Form1 : Form
	{
		public Form1()
		{
			InitializeComponent();
		}

		class coord
		{
			public double lat { get; set; } //Обязательно только public и только св-ва.
			public double lon { get; set; } //Обязательно только public и только св-ва.
			public coord()
			{
				lat = 10;
				lon = -10;
			}
		}

		public class weather
		{
			public int id { get; set; }
			public string main { get; set; }
			public string description { get; set; }
			public string icon { get; set; }
			//public Bitmap Icon { get { return new Bitmap(Image.FromFile($"icon/{icon}.png")); } }
		}

		class fromWeather
		{
			public int test1 { get; set; }
			public int test2 { get; set; }
		}

		class main
		{
			public double temp { get; set; }
			public int pressure { get; set; }
			public int humidity { get; set; }
			public double temp_min { get; set; }
			public double temp_max { get; set; }
		}

		class wind
		{
			public int speed { get; set; }
			public int deg { get; set; }
		}

		class clouds
		{
			public int all { get; set; }
		}

		class sys
		{
			public int type { get; set; }
			public int id { get; set; }
			public double message { get; set; }
			public string country { get; set; }
			public long sunrise { get; set; }
			public long sunset { get; set; }
		}

		class openweather
		{
			public coord coord { get; set; }
			public weather[] weather { get; set; }
			public fromWeather fromWeather { get; set; }

			[JsonProperty("base")] //так как слово base является ключевым для C# необходимо воспользоваться параметром, он как бы подменяет имя.
			public string base1 { get; set; }
			public main main { get; set; }
			public int visibility { get; set; }
			public wind wind { get; set; }
			public clouds clouds { get; set; }
			public long dt { get; set; }
			public sys sys { get; set; }
			public int id { get; set; }
			public string name { get; set; }
			public int cod { get; set; }
		}

		public class myData
		{
			public int id { get; set; } 
			public string description { get; set; }

			public myData()
			{
			}
		}

		class testJSON : myData
		{
			public int speed { get; set; }
			public string deg { get; set; }
			public int time { get; set; }
			
			public int [] arrTest {get; set;}			
			public testJSON ()
			{
				  arrTest = new int[8];
					for (int i = 0; i < 8; i++)
					arrTest[i] = 0;
				
			}
		}

		class inputsIoT
		{
			public int group_id { get; set; }
			public string name { get; set; }
			public int timestamp { get; set; }
			public bool is_error { get; set; }
			public string value { get; set; }
		}

		class JSONIoT : inputsIoT
		{
			public int device_id { get; set; }

		}

		private void button3_Click(object sender, EventArgs e)
		{
			testJSON testMy = new testJSON();			


			string jsonString;
			jsonString = JsonConvert.SerializeObject(testMy);
			string writePath = @"..\..\test1.txt";
			using (StreamWriter stW = new StreamWriter(writePath, false))
			{
				stW.WriteLine(jsonString);
			}
		}

		//запрос данныз с openWeather
		private void button1_Click(object sender, EventArgs e)
		{
			WebRequest req = WebRequest.Create("http://api.openweathermap.org/data/2.5/weather?q=Moscow&APPID=a5ca6c5692978d29d84474e9f351648c");
			req.Method = "POST";
			req.ContentType = "application/json";

			string str = "";
			openweather openweather1;

			openweather myWeather = new openweather
			{
				id = 10,
				name = "test"
			};

			myWeather.id = 20;
			myWeather.coord.lat = 15;

			WebResponse response = req.GetResponse();
			using (Stream s = response.GetResponseStream())
			{
				using (StreamReader r = new StreamReader(s))
				{
					str= r.ReadToEnd();
				}
			}
			response.Close();

			openweather1 = JsonConvert.DeserializeObject<openweather>(str);
			

			label1.Text = openweather1.clouds.all.ToString();
			label2.Text = openweather1.sys.sunrise.ToString();
			System.DateTime dtDateTime= new DateTime(1970, 1, 1, 0, 0, 0, 0, System.DateTimeKind.Utc);
			dtDateTime = dtDateTime.AddSeconds(openweather1.sys.sunrise).ToLocalTime();
			label3.Text = dtDateTime.ToString();
			openweather1.sys.sunrise = 159350343;
			//openweather1.fromW.description = "testMy";
			openweather1.fromWeather.test1 = 64; 
			openweather1.main.temp_max = 65.00;
			

			string jsonString;
			jsonString = JsonConvert.SerializeObject(openweather1);

			textBox2.Text = jsonString;

			string writePath = @"C:\test.txt";
			using (StreamWriter stW = new StreamWriter(writePath,false))
			{
				stW.WriteLine(jsonString);
			}

		}

		private void button2_Click_1(object sender, EventArgs e)
		{
			button1_Click(sender, e);
		}
	}
}
