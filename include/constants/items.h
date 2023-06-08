#pragma once

enum {
    ITEM_NONE              = 0x00,

    // Swords
    ITEM_SWORD_IRON        = 0x01,
    ITEM_SWORD_SLIM        = 0x02,
    ITEM_SWORD_STEEL       = 0x03,
    ITEM_SWORD_SILVER      = 0x04,
    ITEM_BLADE_IRON        = 0x05,
    ITEM_BLADE_STEEL       = 0x06,
    ITEM_BLADE_SILVER      = 0x07,
    ITEM_SWORD_VENIN       = 0x08,
    ITEM_SWORD_RAPIER      = 0x09,
    ITEM_SWORD_MKATTI      = 0x0A,
    ITEM_SWORD_BRAVE       = 0x0B,
    ITEM_SWORD_SHAMSIR     = 0x0C,
    ITEM_SWORD_KILLER      = 0x0D,
    ITEM_SWORD_ARMORSLAYER = 0x0E,
    ITEM_SWORD_WYRMSLAYER  = 0x0F,
    ITEM_SWORD_LIGHTBRAND  = 0x10,
    ITEM_SWORD_RUNESWORD   = 0x11,
    ITEM_SWORD_LANCEREAVER = 0x12,
    ITEM_SWORD_ZANBATO     = 0x13,

    // Lances
    ITEM_LANCE_IRON        = 0x14,
    ITEM_LANCE_SLIM        = 0x15,
    ITEM_LANCE_STEEL       = 0x16,
    ITEM_LANCE_SILVER      = 0x17,
    ITEM_LANCE_VENIN       = 0x18,
    ITEM_LANCE_BRAVE       = 0x19,
    ITEM_LANCE_KILLER      = 0x1A,
    ITEM_LANCE_HORSESLAYER = 0x1B,
    ITEM_LANCE_JAVELIN     = 0x1C,
    ITEM_LANCE_SPEAR       = 0x1D,
    ITEM_LANCE_AXEREAVER   = 0x1E,

    // Axes
    ITEM_AXE_IRON          = 0x1F,
    ITEM_AXE_STEEL         = 0x20,
    ITEM_AXE_SILVER        = 0x21,
    ITEM_AXE_VENIN         = 0x22,
    ITEM_AXE_BRAVE         = 0x23,
    ITEM_AXE_KILLER        = 0x24,
    ITEM_AXE_HALBERD       = 0x25,
    ITEM_AXE_HAMMER        = 0x26,
    ITEM_AXE_DEVIL         = 0x27,
    ITEM_AXE_HANDAXE       = 0x28,
    ITEM_AXE_TOMAHAWK      = 0x29,
    ITEM_AXE_SWORDREAVER   = 0x2A,
    ITEM_AXE_SWORDSLAYER   = 0x2B,

    // Bows
    ITEM_BOW_IRON          = 0x2C,
    ITEM_BOW_STEEL         = 0x2D,
    ITEM_BOW_SILVER        = 0x2E,
    ITEM_BOW_VENIN         = 0x2F,
    ITEM_BOW_KILLER        = 0x30,
    ITEM_BOW_BRAVE         = 0x31,
    ITEM_BOW_SHORTBOW      = 0x32,
    ITEM_BOW_LONGBOW       = 0x33,

    // Ballistas
    ITEM_BALLISTA_REGULAR  = 0x34,
    ITEM_BALLISTA_LONG     = 0x35,
    ITEM_BALLISTA_KILLER   = 0x36,

    // Anima tomes
    ITEM_ANIMA_FIRE        = 0x37,
    ITEM_ANIMA_THUNDER     = 0x38,
    ITEM_ANIMA_ELFIRE      = 0x39,
    ITEM_ANIMA_BOLTING     = 0x3A,
    ITEM_ANIMA_FIMBULVETR  = 0x3B,
    ITEM_ANIMA_FORBLAZE    = 0x3C,
    ITEM_ANIMA_EXCALIBUR   = 0x3D,

    // Light tomes
    ITEM_LIGHT_LIGHTNING   = 0x3E,
    ITEM_LIGHT_SHINE       = 0x3F,
    ITEM_LIGHT_DIVINE      = 0x40,
    ITEM_LIGHT_PURGE       = 0x41,
    ITEM_LIGHT_AURA        = 0x42,
    ITEM_LIGHT_LUCE        = 0x43,

    // Dark tomes
    ITEM_DARK_FLUX         = 0x44,
    ITEM_DARK_LUNA         = 0x45,
    ITEM_DARK_NOSFERATU    = 0x46,
    ITEM_DARK_ECLIPSE      = 0x47,
    ITEM_DARK_FENRIR       = 0x48,
    ITEM_DARK_GLEIPNIR     = 0x49,

    // Staves
    ITEM_STAFF_HEAL        = 0x4A,
    ITEM_STAFF_MEND        = 0x4B,
    ITEM_STAFF_RECOVER     = 0x4C,
    ITEM_STAFF_PHYSIC      = 0x4D,
    ITEM_STAFF_FORTIFY     = 0x4E,
    ITEM_STAFF_RESTORE     = 0x4F,
    ITEM_STAFF_SILENCE     = 0x50,
    ITEM_STAFF_SLEEP       = 0x51,
    ITEM_STAFF_BERSERK     = 0x52,
    ITEM_STAFF_WARP        = 0x53,
    ITEM_STAFF_RESCUE      = 0x54,
    ITEM_STAFF_TORCH       = 0x55,
    ITEM_STAFF_REPAIR      = 0x56,
    ITEM_STAFF_UNLOCK      = 0x57,
    ITEM_STAFF_BARRIER     = 0x58,

    // Random dragon axe
    ITEM_AXE_DRAGON        = 0x59,

    // Stat boosters
    ITEM_BOOSTER_HP        = 0x5A,
    ITEM_BOOSTER_POW       = 0x5B,
    ITEM_BOOSTER_SKL       = 0x5C,
    ITEM_BOOSTER_SPD       = 0x5D,
    ITEM_BOOSTER_LCK       = 0x5E,
    ITEM_BOOSTER_DEF       = 0x5F,
    ITEM_BOOSTER_RES       = 0x60,
    ITEM_BOOSTER_MOV       = 0x61,
    ITEM_BOOSTER_CON       = 0x62,

    // Promotion items
    ITEM_HEROCREST         = 0x63,
    ITEM_KNIGHTCREST       = 0x64,
    ITEM_ORIONSBOLT        = 0x65,
    ITEM_ELYSIANWHIP       = 0x66,
    ITEM_GUIDINGRING       = 0x67,

    // items
    ITEM_CHESTKEY          = 0x68,
    ITEM_DOORKEY           = 0x69,
    ITEM_LOCKPICK          = 0x6A,
    ITEM_VULNERARY         = 0x6B,
    ITEM_ELIXIR            = 0x6C,
    ITEM_PUREWATER         = 0x6D,
    ITEM_ANTITOXIN         = 0x6E,
    ITEM_TORCH             = 0x6F,
    ITEM_DELPHISHIELD      = 0x70,
    ITEM_MEMBERCARD        = 0x71,
    ITEM_SILVERCARD        = 0x72,
    ITEM_WHITEGEM          = 0x73,
    ITEM_BLUEGEM           = 0x74,
    ITEM_REDGEM            = 0x75,

    // From here onwards organization is a myth
    ITEM_GOLD              = 0x76,
    ITEM_LANCE_REGINLEIF   = 0x77,
    ITEM_CHESTKEY_BUNDLE   = 0x78,
    ITEM_MINE              = 0x79,
    ITEM_LIGHTRUNE         = 0x7A,
    ITEM_HOPLON_SHIELD     = 0x7B,
    ITEM_FILLAS_MIGHT      = 0x7C,
    ITEM_NINISS_GRACE      = 0x7D,
    ITEM_THORS_IRE         = 0x7E,
    ITEM_SETS_LITANY       = 0x7F,
    ITEM_EMBLEM_BLADE      = 0x80,
    ITEM_EMBLEM_LANCE      = 0x81,
    ITEM_EMBLEM_AXE        = 0x82,
    ITEM_EMBLEM_BOW        = 0x83,
    ITEM_SWORD_DURANDAL    = 0x84,
    ITEM_AXE_ARMADS        = 0x85,
    ITEM_LIGHT_AUREOLA     = 0x86,
    ITEM_EARTH_SEAL        = 0x87,
    ITEM_AFAS_DROPS        = 0x88,
    ITEM_HEAVEN_SEAL       = 0x89,
    ITEM_EMBLEM_SEAL       = 0x8A,
    ITEM_FELL_CONTRACT     = 0x8B,
    ITEM_SWORD_SOL_KATTI   = 0x8C,
    ITEM_AXE_WOLF_BEIL     = 0x8D,
    ITEM_DARK_ERESHKIGAL   = 0x8E,
    ITEM_ANIMA_FLAMETONGUE = 0x8F,
    ITEM_SWORD_REGAL_BLADE = 0x90,
    ITEM_LANCE_REX_HASTA   = 0x91,
    ITEM_AXE_BASILIKOS     = 0x92,
    ITEM_BOW_RIENFLECHE    = 0x93,
    ITEM_LANCE_HEAVYSPEAR  = 0x94,
    ITEM_LANCE_SHORTSPEAR  = 0x95,
    ITEM_OCEANSEAL         = 0x96,
    ITEM_3000G             = 0x97,
    ITEM_5000G             = 0x98,
    ITEM_SWORD_WINDSWORD   = 0x99,
    ITEM_VULNERARY_2       = 0x9A, // TODO: figure out what this really is
    ITEM_VULNERARY_3       = 0x9B,
    ITEM_VULNERARY_4       = 0x9C,
    ITEM_DANCE             = 0x9D,
    ITEM_PLAY              = 0x9E
};
