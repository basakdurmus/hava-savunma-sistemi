#pragma once

// Homing işlemine ait durumlar
enum class HomingDurum {
  BASLAMADI,
  LIMIT_ARA,
  LIMIT_GERI_CEKIL,
  TAMAMLANDI,
  HATA
};
