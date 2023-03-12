String name = "";
String mobile = "";
String address = "";
String email = "";

void setup()
{
  Serial.begin(9600);
  Serial.flush();
}

void loop()
{
  Serial.println("");
  Serial.println("Enter your name:");
  while (Serial.available() == 0)
  {
  }
  name = Serial.readString();
  Serial.println("Enter your Phone Number:");
  while (Serial.available() == 0)
  {
  }
  mobile = Serial.readString();
  Serial.println("Enter your Address:");
  while (Serial.available() == 0)
  {
  }
  address = Serial.readString();
  Serial.println("Enter your Email:");
  while (Serial.available() == 0)
  {
  }
  email = Serial.readString();
  Serial.println("------------------------");
  Serial.println("Your Name:" + name);
  Serial.println("Your Mobile Number:" + mobile);
  Serial.println("Your Adress:" + address);
  Serial.println("Your Email:" + email);
  Serial.println("Thank You...");
  Serial.println("");
  while (Serial.available() == 0)
  {
  }
}
