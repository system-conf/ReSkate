# ReSkate Türkçe

skate. oyununun menüleri, HUD'u, görevleri ve diyalogları için ReSkate Türkçe çevirisi. Oyundaki metinlerin yaklaşık %94'ü (19.448 metin) Türkçe; başlıklar doğru Türkçe büyük harfle yazılır (DİL, PARTİ SOHBETİ).

## Kurulum

1. Başlatıcıda **MOD BUL** (GET MODS) sayfasından **ReSkate_Turkce**'yi kurun.
2. Oyun ilk açılışta eklentinin ne yapacağını sorar (oyunun metinlerini değiştirmek): **Turn on** deyin.
3. Oyunun metin dili **English** kalmalı; çeviri İngilizce metinlerin üzerine yazılır.

## Nasıl çalışır

`strings` izinli bir ReSkate eklentisidir (`reskate-plugin.json`, `plugin/main.lua`). Kendi
klasöründeki `data/strings.json` dosyasını okur ve metinleri `reskate.strings.set_many` ile oyuna
verir. Anahtarlar oyunun metin kimlikleridir; kimliği bilinmeyen metinler için `#hash` anahtarları
kullanılır. Dosyada olmayan her metin için oyunun kendi metni görünür.

Modu kapatırsanız Türkçe metinler oyun yeniden başlayana kadar kalır.

## Gereksinimler

ReSkate **2.1.3** veya üstü (`reskate.strings` API'si 2.1.3 ile geldi).

Hata veya çeviri önerisi: https://github.com/system-conf/ReSkate/issues

Gayriresmî bir hayran çevirisidir; EA ve Full Circle ile bağlantısı yoktur.

---

## English

Turkish translation of skate.'s menus and HUD for ReSkate.

- **Install:** from the launcher's **GET MODS**; allow the plugin when the game asks. Keep the game's text language on English.
- **Requires:** ReSkate 2.1.3 or later.
- **How it works:** a ReSkate plugin with the `strings` permission. It reads `data/strings.json`
  and hands the texts to the game with `reskate.strings.set_many`; any string the file lacks keeps
  the game's own text. Switching the mod off leaves the Turkish text until the game restarts.
- **Requires:** ReSkate with the plugin API's `strings` permission.
