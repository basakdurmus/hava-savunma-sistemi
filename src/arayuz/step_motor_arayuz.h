#pragma once

// Step motora gönderilecek komut yapısı
struct StepMotorKomut {
  float hedef_hiz_derece_saniye;
};

// Step motorun durum bilgisi
struct StepMotorDurum {
  float anlik_hiz_derece_saniye;
  float pozisyon_derece;
};

// Step motor için SOYUT arayüz
class StepMotorArayuz {
public:
  virtual void baslat() = 0;
  virtual void komutAyarla(const StepMotorKomut& komut) = 0;
  virtual void guncelle(float dt_saniye) = 0;
  virtual StepMotorDurum durumOku() const = 0;
};
