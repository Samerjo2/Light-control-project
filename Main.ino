int potPin = A0;   // مدخل البوتنشيوميتر
int ledPin = 9;    // مخرج الـ LED
int val = 0;       // لتخزين قراءة البوتنشيوميتر

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  val = analogRead(potPin);        // قراءة البوتنشيوميتر (0-1023)
  val = map(val, 0, 1023, 0, 255); // تحويل القيمة إلى مدى PWM (0-255)
  analogWrite(ledPin, val);        // ضبط شدة إضاءة LED
}
