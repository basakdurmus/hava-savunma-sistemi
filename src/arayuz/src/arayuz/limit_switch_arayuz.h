#pragma once

// Limit switch için soyut arayüz
class LimitSwitchArayuz {
public:
  // Limit switch tetiklenmiş mi?
  virtual bool tetiklenmisMi() const = 0;
};
