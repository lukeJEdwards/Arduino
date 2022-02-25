int red_led = 11;
int yellow_led = 12;
int green_led = 9;

int led_on_time = 1000;
int led_off_time = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(red_led, OUTPUT);
  pinMode(yellow_led, OUTPUT);
  pinMode(green_led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(red_led, HIGH);
  delay(led_on_time);
  digitalWrite(red_led, LOW);

  delay(led_off_time);

  digitalWrite(yellow_led, HIGH);
  delay(led_on_time);
  digitalWrite(yellow_led, LOW);

  delay(led_off_time);

  digitalWrite(green_led, HIGH);
  delay(led_on_time);
  digitalWrite(green_led, LOW);

  delay(led_off_time);

}
