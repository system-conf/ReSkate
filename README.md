# ReSkate Türkçe

skate. için Türkçe çeviri: oyunun menüleri, HUD'u, görevleri ve diyalogları. Artık resmî ReSkate
ile çalışan bir **Thunderstore modu**.

> **Gayriresmî bir hayran çevirisidir.** EA, Full Circle veya ReSkate geliştiricileriyle hiçbir
> bağlantısı yoktur ve onlar tarafından desteklenmez. ReSkate'in kendisi
> [ReSkate katkıcılarının](https://github.com/Dingo-Shenanigans/ReSkate) eseridir; bu depo onun bir
> çatalıdır (fork). Çeviriyle ilgili sorunları resmî ReSkate kanallarına değil, bu deponun
> [Issues](https://github.com/system-conf/ReSkate/issues) bölümüne bildir.
>
> Orijinal İngilizce README: [README.en.md](README.en.md)

## Kurulum (önerilen)

Özel DLL yok, dosya değiştirme yok, güncellemeler açık kalır.

1. **Resmî ReSkate'i kur** (2.1.3 veya üstü):
   [github.com/Dingo-Shenanigans/ReSkate/releases/latest](https://github.com/Dingo-Shenanigans/ReSkate/releases/latest).
   Oradaki adımları izle, kısaca:
   - Steam'de **skate.** gerekir (ücretsiz: Steam kütüphanene eklemen yeterli). Epic veya EA app
     kopyaları ReSkate ile çalışmaz.
   - Kendine ait **yeni, boş bir klasör** kullan (ör. `D:\Oyunlar\ReSkate`). Steam'in skate.
     klasörünü **kullanma**.
   - `ReSkateLauncher.exe`'yi çalıştır, skate.'e sahip Steam hesabınla oturum aç; başlatıcı oyunun
     desteklenen sürümünü indirir (yaklaşık 14 GB).
2. **Çeviri modunu kur:** başlatıcıda **GET MODS** sayfasında `ReSkate_Turkce` ara ve kur. (Ya da
   [Thunderstore sayfasını](https://thunderstore.io/c/reskate/p/system_conf/ReSkate_Turkce/) açıp
   oradan başlatıcıyla kur.)
3. **PLAY**'e bas. Oyun ilk açılışta eklentinin metinleri değiştirmek istediğini sorar:
   **Turn on** de.
4. Oyunun metin dili **English** kalmalı; çeviri İngilizce metinlerin yerine geçer.

Bu kadar. Mod güncellemeleri de başlatıcıdan gelir.

## Neler Türkçe?

- **Oyun:** metinlerin yaklaşık **%94'ü** (20.774 metnin 19.448'i): menüler, butonlar, HUD,
  açıklamalar, görevler ve diyaloglar. Marka, mekân ve trick adları ile üç uzun yasal/sağlık
  bildirimi İngilizce kalır.
- **Doğru Türkçe büyük harfler:** oyunun kendisinin büyük harfe çevirdiği yazılar Türkçe kurallara
  uyar (DIL değil **DİL**, ISTANBUL değil **İSTANBUL**).
- **Başlatıcı:** resmî ReSkate'te İngilizce. Türkçe başlatıcı için aşağıya bak.

## Sık sorulanlar / Sorun giderme

- **Oyunda hiçbir şey Türkçe değil.**
  - ReSkate sürümünün **2.1.3 veya üstü** olduğunu kontrol et.
  - Oyun içinde **Insert → Plugins → Plugin Manager** aç; **ReSkate_Turkce** açık olmalı. İlk
    soruda yanlışlıkla reddettiysen buradan aç.
  - Oyunun metin dili **English** olmalı.
  - Başlatıcıda **MY MODS** sayfasında modun açık olduğuna bak.
- **Bütün eklentiler birden kapandı.** **Ctrl+Shift+End** tüm eklentileri kapatan acil durum
  tuşudur. Plugin Manager'dan tekrar aç.
- **Bazı yazılar hâlâ İngilizce.** Marka, mekân ve trick adları bilerek İngilizce bırakıldı; geri
  kalan az sayıda metin henüz çevrilmedi.
- **Bazı yazılar taşıyor ya da kesiliyor.** Türkçe metinler bazen İngilizceden uzun. Ekran
  görüntüsüyle bildir (aşağıya bak).
- **Çok oyunculu?** Sorun yok. Çeviri yalnızca senin ekranındaki yazıları değiştirir; diğer
  oyuncuların moda ihtiyacı yok.
- **Kaldırmak istiyorum.** Başlatıcıda **MY MODS** sayfasından modu kaldır (ya da kapat).
- **Daha önce bu çatalın zip'ini (tr.1 / tr.2) kurmuştum.** Başlatıcıda **AYARLAR → GELİŞMİŞ →
  ReSkate güncellemelerini kur** seçeneğini tekrar aç ki resmî dosyalar gelsin;
  `<ReSkate klasörü>\Mods\system_conf-ReSkate_Turkce\` klasörünü sil; sonra modu **GET MODS**'tan
  kur. tr.1'den kalan `%LOCALAPPDATA%\ReSkate\reskate-strings.json` dosyası varsa silebilirsin.

## Türkçe başlatıcı (isteğe bağlı)

Başlatıcının Türkçesi [#313](https://github.com/Dingo-Shenanigans/ReSkate/pull/313) numaralı PR'a
bağlı ve bu henüz resmî ReSkate'te yok. O zamana kadar bu çatalın
**[v2.1.2-tr.2](https://github.com/system-conf/ReSkate/releases/tag/v2.1.2-tr.2)** paketinde Türkçe
bir başlatıcı var, ama:

- **ReSkate 2.1.2** tabanlıdır. Resmî sunucular 2.1.3'e geçti; çok oyunculu kısım 2.1.3
  oyuncuları ve sunucularıyla **uyumlu olmayabilir** (yalnızca 2.1.2 oyuncularıyla).
- **ReSkate güncellemelerini kur** seçeneğinin **kapalı** olması gerekir; açıkken başlatıcı resmî
  dosyaları indirip paketin üzerine yazar.
- İçindeki `ReSkate.dll` Spotify desteği olmadan derlendi.

Çoğu oyuncu için **önerilen kurulum** (yukarıda) daha iyi seçenektir. Paketin kurulum adımları
sürüm notlarındadır.

Eski / alternatif sürümler: [v2.1.2-tr.2](https://github.com/system-conf/ReSkate/releases/tag/v2.1.2-tr.2)
(2.1.2, eklenti modu + Türkçe başlatıcı) ve
[v2.1.1-tr.1](https://github.com/system-conf/ReSkate/releases/tag/v2.1.1-tr.1) (2.1.1 tabanlı ilk
sürüm). İkisi de eskidir; [tüm sürümler](https://github.com/system-conf/ReSkate/releases).

## Katkı / hata bildirimi

Hataları ve önerileri bu deponun [Issues](https://github.com/system-conf/ReSkate/issues) bölümüne
yaz. Çeviri düzeltmesi önermek için bir Issue aç ve şunları ekle:

- ekran görüntüsü,
- İngilizce metin,
- önerdiğin Türkçe metin.

Oyun çevirisi (eklenti modu): [`contrib/translation-tr/mod/`](contrib/translation-tr/mod/), metinler
[`data/strings.json`](contrib/translation-tr/mod/data/strings.json) içinde.
Başlatıcı çevirisi: [`Launcher/languages/tr.json`](Launcher/languages/tr.json)

## Teşekkürler / Upstream PR'lar

Çevirinin ihtiyaç duyduğu özellikler resmî ReSkate'e eklendi. Teşekkürler ReSkate ekibine!

- [#378](https://github.com/Dingo-Shenanigans/ReSkate/pull/378) (**birleştirildi**, 2.1.3):
  eklentiler için `reskate.strings` ve Türkçe büyük/küçük harf kuralları. 2.1.3 sürüm notlarında
  "system-conf (strings)" olarak geçer.
- [#379](https://github.com/Dingo-Shenanigans/ReSkate/pull/379) (**birleştirildi**, 2.1.3): mod
  listesinde eklenti modları ("nothing to load" yazmaz) ve yerel `icon.png`.
- [#313](https://github.com/Dingo-Shenanigans/ReSkate/pull/313) (açık): başlatıcı çevirisi ve Dil
  ayarı.
- Belgeler: [Dingo-Shenanigans/docs#5](https://github.com/Dingo-Shenanigans/docs/pull/5) (açık).

## Lisans

ReSkate GPLv3 lisanslıdır (bkz. [LICENSE](LICENSE)). Bu çatalın sürümlerindeki `ReSkate.dll` ve
`ReSkateLauncher.exe` bu deponun kaynak kodundan derlenmiştir; kaynak kodunun tamamı burada.
