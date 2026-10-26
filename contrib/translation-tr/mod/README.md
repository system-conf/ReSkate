# ReSkate Türkçe

skate. oyununun menüleri ve HUD'u için ReSkate Türkçe çevirisi.

## Kurulum

Başlatıcıdaki **GET MODS** sayfasından kurun ya da bu klasörü oyunun `Mods` klasörüne koyup
başlatıcının mod listesinden açın.

## Nasıl çalışır

`strings` izinli bir ReSkate eklentisidir (`reskate-plugin.json`, `plugin/main.lua`). Kendi
klasöründeki `data/strings.json` dosyasını okur ve metinleri `reskate.strings.set_many` ile oyuna
verir. Anahtarlar oyunun metin kimlikleridir; kimliği bilinmeyen metinler için `#hash` anahtarları
kullanılır. Dosyada olmayan her metin için oyunun kendi metni görünür.

Modu kapatırsanız Türkçe metinler oyun yeniden başlayana kadar kalır.

## Gereksinimler

Eklenti API'sinde `strings` iznini destekleyen bir ReSkate sürümü.

---

## English

Turkish translation of skate.'s menus and HUD for ReSkate.

- **Install:** from the launcher's **GET MODS**, or put this folder in the game's `Mods` folder and
  switch it on in the launcher's mod list.
- **How it works:** a ReSkate plugin with the `strings` permission. It reads `data/strings.json`
  and hands the texts to the game with `reskate.strings.set_many`; any string the file lacks keeps
  the game's own text. Switching the mod off leaves the Turkish text until the game restarts.
- **Requires:** ReSkate with the plugin API's `strings` permission.
