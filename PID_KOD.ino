// Örnek kod
// PID Sabitleri
float Kp = 1.5;
float Ki = 0.0;
float Kd = 0.8;

// PID değişkenleri
float error = 0;
float lastError = 0;
float integral = 0;
float derivative = 0;
float pidOutput = 0;

int baseSpeed = 150; // Temel motor hızı
int maxSpeed = 255;  // Maksimum PWM değeri

void setup() {
  pinMode(3, OUTPUT);  // Sol motor PWM
  pinMode(5, OUTPUT);  // Sağ motor PWM
  Serial.begin(9600);
}

void loop() {
  error = readLineError(); // Örneğin -30 sol çizgide, 0 ortada, +30 sağ çizgide

  // PID hesaplama
  integral += error;
  derivative = error - lastError;
  pidOutput = Kp * error + Ki * integral + Kd * derivative;
  lastError = error;

  // Motor hızlarını ayarla
  int leftSpeed = baseSpeed + pidOutput;
  int rightSpeed = baseSpeed - pidOutput;

  // Hızları sınırlama
  leftSpeed = constrain(leftSpeed, 0, maxSpeed);
  rightSpeed = constrain(rightSpeed, 0, maxSpeed);

  analogWrite(3, leftSpeed);  // Sol motor
  analogWrite(5, rightSpeed); // Sağ motor

  delay(20); // PID döngü süresi
}

int readLineError() {
  return analogRead(A0) - 512;  // A0 sensör ortalaması varsayımı
}
