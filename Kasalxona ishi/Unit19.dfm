object Form_Bemorlarni_malumotini_ozgartirish: TForm_Bemorlarni_malumotini_ozgartirish
  Left = 427
  Top = 59
  Width = 1382
  Height = 784
  AutoScroll = True
  Caption = 'Bemorlarni malumotini o'#39'zgartirish'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesigned
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 1366
    Height = 745
    Align = alClient
    Color = clScrollBar
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Arial'
    Font.Style = []
    ParentBackground = False
    ParentFont = False
    PopupMenu = PopupMenu1
    TabOrder = 0
    object Label10: TLabel
      Left = 274
      Top = 2
      Width = 30
      Height = 16
      Caption = 'Sana'
    end
    object Label4: TLabel
      Left = 465
      Top = 0
      Width = 29
      Height = 16
      Caption = 'Sana'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Label3: TLabel
      Left = 679
      Top = 44
      Width = 33
      Height = 16
      Caption = 'Holati'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
    end
    object Label6: TLabel
      Left = 921
      Top = 44
      Width = 139
      Height = 16
      Hint = 'Kasalxonada qo'#39'yilgan tashhis sanasi'
      Caption = 'Kasallik aniqlangan sana'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
    end
    object Label7: TLabel
      Left = 1081
      Top = 43
      Width = 117
      Height = 16
      Caption = 'Kasalxonaga yotishi'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
    end
    object Label1: TLabel
      Left = 410
      Top = 44
      Width = 99
      Height = 16
      Caption = 'Rezus mansubligi'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Label0: TLabel
      Left = 315
      Top = 44
      Width = 63
      Height = 16
      Caption = 'Qon guruhi'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
    end
    object Label2: TLabel
      Left = 1037
      Top = -4
      Width = 147
      Height = 16
      Caption = 'Bemorni olib yurish turlari'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Label5: TLabel
      Left = 1269
      Top = -4
      Width = 24
      Height = 16
      Caption = 'Jinsi'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object SpeedButton1: TSpeedButton
      Left = 981
      Top = 626
      Width = 164
      Height = 22
      Caption = 'Saqlash'
      Flat = True
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clNavy
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      OnClick = SpeedButton1Click
    end
    object SpeedButton2: TSpeedButton
      Left = 1186
      Top = 626
      Width = 164
      Height = 22
      Caption = 'Chiqish'
      Flat = True
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clRed
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      OnClick = SpeedButton2Click
    end
    object Muassasaning_nomi: TLabeledEdit
      Left = 11
      Top = 21
      Width = 129
      Height = 22
      Ctl3D = False
      EditLabel.Width = 116
      EditLabel.Height = 16
      EditLabel.Caption = 'Muassasaning nomi'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentCtl3D = False
      ParentFont = False
      TabOrder = 0
    end
    object Muassasaning_kodi: TLabeledEdit
      Left = 152
      Top = 19
      Width = 82
      Height = 22
      Ctl3D = False
      EditLabel.Width = 112
      EditLabel.Height = 16
      EditLabel.Caption = 'Muassasaning kodi'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentCtl3D = False
      ParentFont = False
      TabOrder = 1
    end
    object Dorilarning_nojoya_tasiri: TLabeledEdit
      Left = 13
      Top = 109
      Width = 956
      Height = 24
      Ctl3D = True
      EditLabel.Width = 400
      EditLabel.Height = 16
      EditLabel.Caption = 
        'Dorilarning nojo'#39'ya tasiri (Dorilarning nomi, nojo'#39'ya tasirining' +
        ' ko'#39'rinishi)'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ImeMode = imSAlpha
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = False
      TabOrder = 2
    end
    object Kasalxonaga_yotqizilgan_sana: TDateTimePicker
      Left = 270
      Top = 19
      Width = 93
      Height = 24
      Hint = 'Kasalxonaga yotqizilgan kun'
      Date = 42774.887271203700000000
      Time = 42774.887271203700000000
      ParentShowHint = False
      ShowHint = True
      TabOrder = 3
    end
    object Kasalxonaga_yotqizilgan_vaqt: TLabeledEdit
      Left = 376
      Top = 19
      Width = 66
      Height = 22
      Hint = 'Kasalxonaga yotqizilgan vaqt'
      Ctl3D = False
      EditLabel.Width = 26
      EditLabel.Height = 16
      EditLabel.Caption = 'Vaqt'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 4
    end
    object Kasalxonadan_chiqarilgan_kun: TDateTimePicker
      Left = 459
      Top = 17
      Width = 95
      Height = 24
      Hint = 'Kasalxonadan chiqarilgan kun'
      Date = 42774.887271203700000000
      Time = 42774.887271203700000000
      ParentShowHint = False
      ShowHint = True
      TabOrder = 5
    end
    object Kasalxonadan_chiqarilgan_vaqt: TLabeledEdit
      Left = 572
      Top = 17
      Width = 70
      Height = 22
      Hint = 'Kasalxonadan chiqarilgan vaqt'
      Ctl3D = False
      EditLabel.Width = 26
      EditLabel.Height = 16
      EditLabel.Caption = 'Vaqt'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 6
    end
    object Qaysi_bolimga_otkazildi: TLabeledEdit
      Left = 658
      Top = 16
      Width = 143
      Height = 22
      Hint = 'Qaysi bo'#39'limga o'#39'tkazildi'
      Ctl3D = False
      EditLabel.Width = 67
      EditLabel.Height = 16
      EditLabel.Caption = 'Bo'#39'lim nomi'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 7
    end
    object Necha_kun_yotib_davolangan: TLabeledEdit
      Left = 832
      Top = 16
      Width = 65
      Height = 22
      Hint = 'Necha kun yotib davolangan'
      Ctl3D = False
      EditLabel.Width = 23
      EditLabel.Height = 16
      EditLabel.Caption = 'Kun'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 8
    end
    object Doimiy_yashash_joyi: TLabeledEdit
      Left = 13
      Top = 153
      Width = 956
      Height = 24
      TabStop = False
      Ctl3D = True
      EditLabel.Width = 952
      EditLabel.Height = 16
      EditLabel.Caption = 
        'Doimiy yashash joyi (Yashash joyi ko'#39'rsatilsin, viloyat va tuman' +
        'lardan kelganlar uchun manzili va yaqin qarindoshlarining yashas' +
        'h joyi va telefon raqamlari ko'#39'rsatilsin)'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      EditLabel.ParentShowHint = False
      EditLabel.ShowHint = True
      EditLabel.WordWrap = True
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ImeMode = imSAlpha
      LabelSpacing = 2
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = False
      TabOrder = 9
    end
    object Ish_joyi_kasbi: TLabeledEdit
      Left = 11
      Top = 196
      Width = 958
      Height = 24
      AutoSize = False
      Ctl3D = True
      EditLabel.Width = 965
      EditLabel.Height = 16
      EditLabel.Caption = 
        'Ish joyi, kasbi, lavozimi(Yashash joyi ko'#39'rsatilsin, viloyat va ' +
        'tumanlardan kelganlar uchun manzili va yaqin qarindoshlarining y' +
        'ashash joyi va telefon raqamlari ko'#39'rsatilsin)'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ImeMode = imSAlpha
      LabelSpacing = 2
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = False
      TabOrder = 10
    end
    object Bemor_qayerdan_yuborilgan: TLabeledEdit
      Left = 516
      Top = 65
      Width = 129
      Height = 22
      Hint = 'Davolash muassasasi nomi'
      Ctl3D = False
      EditLabel.Width = 158
      EditLabel.Height = 16
      EditLabel.Caption = 'Bemor qayerdan yuborilgan'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 11
    end
    object qanday_transportda: TLabeledEdit
      Left = 777
      Top = 63
      Width = 129
      Height = 22
      Hint = 'Shifoxonaga qanday transportda keltirilgan'
      Ctl3D = False
      EditLabel.Width = 118
      EditLabel.Height = 16
      EditLabel.Caption = 'Qanday transportda '
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 12
    end
    object Holati: TComboBox
      Left = 679
      Top = 63
      Width = 73
      Height = 24
      Hint = 'Kasalxonaga shoshilinch ravishda keltirilganmi ?'
      Ctl3D = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ItemIndex = 0
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 13
      Text = 'Ha'
      Items.Strings = (
        'Ha'
        'Yo'#39'q')
    end
    object bemor_yollanmasidagi_tashhisi: TLabeledEdit
      Left = 11
      Top = 239
      Width = 958
      Height = 24
      AutoSize = False
      Ctl3D = True
      EditLabel.Width = 383
      EditLabel.Height = 16
      EditLabel.Caption = 
        '                                                   Bemor yo'#39'llan' +
        'masidagi tashhisi'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ImeMode = imSAlpha
      LabelSpacing = 2
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = False
      TabOrder = 14
    end
    object Qabulxonada_qoyilgan_tashhis: TLabeledEdit
      Left = 11
      Top = 278
      Width = 958
      Height = 24
      AutoSize = False
      Ctl3D = True
      EditLabel.Width = 380
      EditLabel.Height = 16
      EditLabel.Caption = 
        '                                                   Qabulxonada q' +
        'o'#39'yilgan tashhis'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ImeMode = imSAlpha
      LabelSpacing = 2
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = False
      TabOrder = 15
    end
    object Kasalxonada_qoyilgan_tashhis: TLabeledEdit
      Left = 13
      Top = 319
      Width = 956
      Height = 24
      AutoSize = False
      Ctl3D = True
      EditLabel.Width = 375
      EditLabel.Height = 16
      EditLabel.Caption = 
        '                                                  Kasalxonada qo' +
        #39'yilgan tashhis'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ImeMode = imSAlpha
      LabelSpacing = 2
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = False
      TabOrder = 16
    end
    object Kasallik_aniqlangan_sana: TDateTimePicker
      Left = 922
      Top = 63
      Width = 114
      Height = 24
      Date = 42774.887271203700000000
      Time = 42774.887271203700000000
      ParentShowHint = False
      ShowHint = True
      TabOrder = 17
    end
    object GroupBox1: TGroupBox
      Left = 15
      Top = 349
      Width = 954
      Height = 156
      Caption = 'Kasalxonada qo'#39'yilgan yakuniy tashhis'
      DoubleBuffered = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentDoubleBuffered = False
      ParentFont = False
      TabOrder = 18
      object Aniqlangan_xamroh_kasalliklr: TLabeledEdit
        Left = 3
        Top = 114
        Width = 950
        Height = 24
        AutoSize = False
        Ctl3D = True
        EditLabel.Width = 444
        EditLabel.Height = 16
        EditLabel.Caption = 
          '                                                                ' +
          '    Aniqlangan xamroh kasalliklar'
        EditLabel.Color = clBtnText
        EditLabel.Font.Charset = RUSSIAN_CHARSET
        EditLabel.Font.Color = clWindowText
        EditLabel.Font.Height = -13
        EditLabel.Font.Name = 'Arial'
        EditLabel.Font.Style = []
        EditLabel.ParentColor = False
        EditLabel.ParentFont = False
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Arial'
        Font.Style = []
        ImeMode = imSAlpha
        LabelSpacing = 2
        ParentCtl3D = False
        ParentFont = False
        ParentShowHint = False
        ShowHint = False
        TabOrder = 0
      end
      object Asosiy_kasallik_asorati: TLabeledEdit
        Left = 3
        Top = 71
        Width = 951
        Height = 24
        AutoSize = False
        Ctl3D = True
        EditLabel.Width = 430
        EditLabel.Height = 16
        EditLabel.Caption = 
          '                                                                ' +
          '     Asosiy kasallikning asorati'
        EditLabel.Color = clBtnText
        EditLabel.Font.Charset = RUSSIAN_CHARSET
        EditLabel.Font.Color = clWindowText
        EditLabel.Font.Height = -13
        EditLabel.Font.Name = 'Arial'
        EditLabel.Font.Style = []
        EditLabel.ParentColor = False
        EditLabel.ParentFont = False
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Arial'
        Font.Style = []
        ImeMode = imSAlpha
        LabelSpacing = 2
        ParentCtl3D = False
        ParentFont = False
        ParentShowHint = False
        ShowHint = False
        TabOrder = 1
      end
      object Asosiy: TLabeledEdit
        Left = 3
        Top = 30
        Width = 951
        Height = 24
        AutoSize = False
        Ctl3D = True
        EditLabel.Width = 359
        EditLabel.Height = 16
        EditLabel.Caption = 
          '                                                                ' +
          '                Asosiy'
        EditLabel.Color = clBtnText
        EditLabel.Font.Charset = RUSSIAN_CHARSET
        EditLabel.Font.Color = clWindowText
        EditLabel.Font.Height = -13
        EditLabel.Font.Name = 'Arial'
        EditLabel.Font.Style = []
        EditLabel.ParentColor = False
        EditLabel.ParentFont = False
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Arial'
        Font.Style = []
        ImeMode = imSAlpha
        LabelSpacing = 2
        ParentCtl3D = False
        ParentFont = False
        ParentShowHint = False
        ShowHint = False
        TabOrder = 2
      end
    end
    object Kasalxonaga_yotishi: TComboBox
      Left = 1080
      Top = 61
      Width = 117
      Height = 24
      Hint = 'Mazkur yil davomida shu kasallik bo'#39'yicha'
      Ctl3D = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ItemIndex = 0
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 19
      Text = 'Birinchi marta'
      Items.Strings = (
        'Birinchi marta'
        'Qayta')
    end
    object Hammasi_bolib: TLabeledEdit
      Left = 1224
      Top = 62
      Width = 94
      Height = 22
      Ctl3D = False
      EditLabel.Width = 88
      EditLabel.Height = 16
      EditLabel.Caption = 'Hammasi bo'#39'lib'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 20
    end
    object GroupBox2: TGroupBox
      Left = 991
      Top = 117
      Width = 508
      Height = 193
      Caption = 'Operasiya natijalari'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 21
      object Operasiya_nomi: TLabeledEdit
        Left = 16
        Top = 30
        Width = 353
        Height = 22
        Ctl3D = False
        EditLabel.Width = 251
        EditLabel.Height = 16
        EditLabel.Caption = '                                       Operasiya nomi '
        EditLabel.Color = clBtnText
        EditLabel.Font.Charset = RUSSIAN_CHARSET
        EditLabel.Font.Color = clWindowText
        EditLabel.Font.Height = -13
        EditLabel.Font.Name = 'Arial'
        EditLabel.Font.Style = []
        EditLabel.ParentColor = False
        EditLabel.ParentFont = False
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Arial'
        Font.Style = []
        ParentCtl3D = False
        ParentFont = False
        ParentShowHint = False
        ShowHint = False
        TabOrder = 0
      end
      object Ogriqsizlantirish_usuli: TLabeledEdit
        Left = 16
        Top = 116
        Width = 353
        Height = 22
        Ctl3D = False
        EditLabel.Width = 282
        EditLabel.Height = 16
        EditLabel.Caption = '                                       Og'#39'riqsizlantirish usuli'
        EditLabel.Color = clBtnText
        EditLabel.Font.Charset = RUSSIAN_CHARSET
        EditLabel.Font.Color = clWindowText
        EditLabel.Font.Height = -13
        EditLabel.Font.Name = 'Arial'
        EditLabel.Font.Style = []
        EditLabel.ParentColor = False
        EditLabel.ParentFont = False
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Arial'
        Font.Style = []
        ParentCtl3D = False
        ParentFont = False
        ParentShowHint = False
        ShowHint = True
        TabOrder = 1
      end
      object Asoratlar: TLabeledEdit
        Left = 16
        Top = 71
        Width = 353
        Height = 22
        Ctl3D = False
        EditLabel.Width = 203
        EditLabel.Height = 16
        EditLabel.Caption = '                                      Asoratlar'
        EditLabel.Color = clBtnText
        EditLabel.Font.Charset = RUSSIAN_CHARSET
        EditLabel.Font.Color = clWindowText
        EditLabel.Font.Height = -13
        EditLabel.Font.Name = 'Arial'
        EditLabel.Font.Style = []
        EditLabel.ParentColor = False
        EditLabel.ParentFont = False
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Arial'
        Font.Style = []
        ParentCtl3D = False
        ParentFont = False
        ParentShowHint = False
        ShowHint = True
        TabOrder = 2
      end
      object Operatsiya_Vaqti: TLabeledEdit
        Left = 271
        Top = 159
        Width = 90
        Height = 22
        Hint = 'Operasiya davom etgan vaqti'
        Ctl3D = False
        EditLabel.Width = 61
        EditLabel.Height = 16
        EditLabel.Caption = 'Vaqti soati'
        EditLabel.Color = clBtnText
        EditLabel.Font.Charset = RUSSIAN_CHARSET
        EditLabel.Font.Color = clWindowText
        EditLabel.Font.Height = -13
        EditLabel.Font.Name = 'Arial'
        EditLabel.Font.Style = []
        EditLabel.ParentColor = False
        EditLabel.ParentFont = False
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Arial'
        Font.Style = []
        ParentCtl3D = False
        ParentFont = False
        ParentShowHint = False
        ShowHint = True
        TabOrder = 3
      end
      object Operasiya_qiluvchi: TLabeledEdit
        Left = 18
        Top = 158
        Width = 203
        Height = 22
        Ctl3D = False
        EditLabel.Width = 105
        EditLabel.Height = 16
        EditLabel.Caption = 'Operasiya qiluvchi'
        EditLabel.Color = clBtnText
        EditLabel.Font.Charset = RUSSIAN_CHARSET
        EditLabel.Font.Color = clWindowText
        EditLabel.Font.Height = -13
        EditLabel.Font.Name = 'Arial'
        EditLabel.Font.Style = []
        EditLabel.ParentColor = False
        EditLabel.ParentFont = False
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Arial'
        Font.Style = []
        ParentCtl3D = False
        ParentFont = False
        ParentShowHint = False
        ShowHint = True
        TabOrder = 4
      end
    end
    object Rezus_mansubligi: TComboBox
      Left = 410
      Top = 63
      Width = 73
      Height = 24
      Ctl3D = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ItemIndex = 0
      ParentCtl3D = False
      ParentFont = False
      TabOrder = 22
      Text = 'Manfiy'
      Items.Strings = (
        'Manfiy'
        'Musbat')
    end
    object Qon_guruhi: TComboBox
      Left = 315
      Top = 63
      Width = 73
      Height = 24
      Ctl3D = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ItemIndex = 0
      ParentCtl3D = False
      ParentFont = False
      TabOrder = 23
      Text = 'I'
      Items.Strings = (
        'I'
        'II'
        'III'
        'IV')
    end
    object Davolashning_boshqa_turlari: TLabeledEdit
      Left = 15
      Top = 524
      Width = 954
      Height = 24
      AutoSize = False
      Ctl3D = True
      EditLabel.Width = 493
      EditLabel.Height = 16
      EditLabel.Caption = 
        '                                                                ' +
        '    Davolashning boshqa turlari(ko'#39'rsating)'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ImeMode = imSAlpha
      LabelSpacing = 2
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = False
      TabOrder = 24
    end
    object Mexnatga_yaroqsizlik_varogi: TLabeledEdit
      Left = 13
      Top = 576
      Width = 956
      Height = 24
      AutoSize = False
      Ctl3D = True
      EditLabel.Width = 971
      EditLabel.Height = 16
      EditLabel.Caption = 
        'Mexnatga yaroqsizlik varog'#39'i yoki malumotnoma('#8470'_________________' +
        '____dan ____________________gacha '#8470'___________________dan_______' +
        '__________gacha)'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ImeMode = imSAlpha
      LabelSpacing = 2
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = False
      TabOrder = 25
    end
    object Davolash_natijasi: TLabeledEdit
      Left = 11
      Top = 624
      Width = 957
      Height = 24
      AutoSize = False
      Ctl3D = True
      EditLabel.Width = 962
      EditLabel.Height = 16
      EditLabel.Caption = 
        'Davolash natijasi:kasalxonadan javob berildi, bir oz yaxshilandi' +
        ', o'#39'zgarishsiz,og'#39'rigan holda,o'#39'ldi,boshqa muassasaga o'#39'tkazildi' +
        ', qabulxonada vafot etdi, xomiladorlikdan)'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ImeMode = imSAlpha
      LabelSpacing = 2
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = False
      TabOrder = 26
    end
    object Ekspertizaga_yuborish_uchun: TLabeledEdit
      Left = 11
      Top = 667
      Width = 957
      Height = 24
      AutoSize = False
      Ctl3D = True
      EditLabel.Width = 474
      EditLabel.Height = 16
      EditLabel.Caption = 
        '                                                                ' +
        '  Ekspertizaga yuborish uchun xulosa'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ImeMode = imSAlpha
      LabelSpacing = 2
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = False
      TabOrder = 27
    end
    object Bemorni_olib_yurish_turlari: TComboBox
      Left = 1039
      Top = 17
      Width = 133
      Height = 24
      ItemIndex = 0
      TabOrder = 28
      Text = 'Aravachada'
      Items.Strings = (
        'Aravachada'
        'Zambilda'
        'O'#39'zi yura oladi')
    end
    object Yoshi: TLabeledEdit
      Left = 1188
      Top = 17
      Width = 61
      Height = 22
      Hint = 
        'To'#39'liq yosh, bolalar uchun: 1 yoshgacha oylar hisobida 2-oygacha' +
        ' kunlar hisobida'
      Ctl3D = False
      EditLabel.Width = 32
      EditLabel.Height = 16
      EditLabel.Caption = 'Yoshi'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 29
    end
    object JInsi: TComboBox
      Left = 1269
      Top = 15
      Width = 73
      Height = 24
      Ctl3D = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ItemIndex = 0
      ParentCtl3D = False
      ParentFont = False
      TabOrder = 30
      Text = 'Erkak'
      Items.Strings = (
        'Erkak'
        'Ayol')
    end
    object Familiyasi: TLabeledEdit
      Left = 11
      Top = 64
      Width = 129
      Height = 22
      Hint = 'Bemor familiyasi'
      Ctl3D = False
      EditLabel.Width = 59
      EditLabel.Height = 16
      EditLabel.Caption = 'Familiyasi'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 31
    end
    object Ismi: TLabeledEdit
      Left = 159
      Top = 64
      Width = 129
      Height = 22
      Hint = 'Bemor Ismi'
      Ctl3D = False
      EditLabel.Width = 24
      EditLabel.Height = 16
      EditLabel.Caption = 'Ismi'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 32
    end
    object Alohida_belgilari: TLabeledEdit
      Left = 993
      Top = 331
      Width = 372
      Height = 22
      Ctl3D = False
      EditLabel.Width = 242
      EditLabel.Height = 16
      EditLabel.Caption = '                                      Alohida belgilari'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 33
    end
    object Qabul_qilinganda_tekshirildi: TLabeledEdit
      Left = 993
      Top = 380
      Width = 362
      Height = 22
      Ctl3D = False
      EditLabel.Width = 307
      EditLabel.Height = 16
      EditLabel.Caption = 
        '                                      Qabul qilinganda tekshiril' +
        'di'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = False
      TabOrder = 34
    end
    object Davolash_shifokori: TLabeledEdit
      Left = 993
      Top = 432
      Width = 209
      Height = 22
      Ctl3D = False
      EditLabel.Width = 104
      EditLabel.Height = 16
      EditLabel.Caption = 'Davolash shifokori'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 35
    end
    object Bolim_mudiri: TLabeledEdit
      Left = 993
      Top = 477
      Width = 209
      Height = 22
      Ctl3D = False
      EditLabel.Width = 74
      EditLabel.Height = 16
      EditLabel.Caption = 'Bo'#39'lim mudiri'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 36
    end
    object Button1: TButton
      Left = 991
      Top = 517
      Width = 194
      Height = 23
      Caption = 'Qabulxona shifokorining yozuvi'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
      TabOrder = 37
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 995
      Top = 548
      Width = 190
      Height = 23
      Hint = 
        'Shikoyatlar, kasallik tarixi, ahvolidagi o'#39'zgarishlar, taxminiy ' +
        'diagnoz, tekshirish rejasi'
      Caption = 'Shikoyatlar kasallik tarixi'
      DoubleBuffered = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentDoubleBuffered = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 38
      OnClick = Button2Click
    end
    object Button3: TButton
      Left = 1208
      Top = 432
      Width = 156
      Height = 23
      Caption = 'Kundalik'
      DoubleBuffered = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentDoubleBuffered = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 39
      OnClick = Button3Click
    end
    object Button4: TButton
      Left = 1209
      Top = 472
      Width = 157
      Height = 23
      Caption = 'Xotima'
      DoubleBuffered = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentDoubleBuffered = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 40
      OnClick = Button4Click
    end
    object Button5: TButton
      Left = 1206
      Top = 515
      Width = 160
      Height = 23
      Caption = 'Patologoanatom xulosasi'
      DoubleBuffered = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentDoubleBuffered = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 41
      OnClick = Button5Click
    end
    object Xona: TLabeledEdit
      Left = 921
      Top = 16
      Width = 88
      Height = 22
      Hint = 'Qaysi xonada davolandi'
      Ctl3D = False
      EditLabel.Width = 28
      EditLabel.Height = 16
      EditLabel.Caption = 'Xona'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 42
    end
  end
  object PopupMenu1: TPopupMenu
    Left = 408
    Top = 160
    object Saqlash1: TMenuItem
      Caption = 'Saqlash'
      OnClick = SpeedButton1Click
    end
    object Kundalik1: TMenuItem
      Caption = 'Kundalik'
      OnClick = Button3Click
    end
    object Xotima1: TMenuItem
      Caption = 'Xotima'
      OnClick = Button4Click
    end
    object Qabulxonashifokorining1: TMenuItem
      Caption = 'Qabulxona shifokorining yozuvi '
      OnClick = Button1Click
    end
    object Shikoyatlarkasalliktarixi1: TMenuItem
      Caption = 'Shikoyatlar kasallik tarixi'
      OnClick = Button2Click
    end
    object Patollogoanatomxulosasi1: TMenuItem
      Caption = 'Patollogoanatom xulosasi'
      OnClick = Button5Click
    end
    object N1: TMenuItem
      Caption = '-'
    end
    object Chiqish1: TMenuItem
      Caption = 'Chiqish'
      OnClick = SpeedButton2Click
    end
  end
end
