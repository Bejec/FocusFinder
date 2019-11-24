// This provides the frozen (compiled bytecode) files that are included if
// any.
#include <Python.h>

#include "nuitka/constants_blob.h"

// Blob from which modules are unstreamed.
#define stream_data constant_bin

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    ssize_t start;
    int size;
};

void copyFrozenModulesTo( struct _frozen *destination )
{
    struct frozen_desc frozen_modules[] = {
        { "base64", 6368384, 11253 },
        { "codecs", 6379637, 36628 },
        { "copy_reg", 6416265, 5137 },
        { "encodings", 6421402, -4362 },
        { "encodings.aliases", 6425764, 8760 },
        { "encodings.ascii", 6434524, 2253 },
        { "encodings.base64_codec", 6436777, 3829 },
        { "encodings.big5", 6440606, 1748 },
        { "encodings.big5hkscs", 6442354, 1788 },
        { "encodings.bz2_codec", 6444142, 4721 },
        { "encodings.charmap", 6448863, 3465 },
        { "encodings.cp037", 6452328, 2829 },
        { "encodings.cp1006", 6455157, 2915 },
        { "encodings.cp1026", 6458072, 2843 },
        { "encodings.cp1140", 6460915, 2829 },
        { "encodings.cp1250", 6463744, 2866 },
        { "encodings.cp1251", 6466610, 2863 },
        { "encodings.cp1252", 6469473, 2866 },
        { "encodings.cp1253", 6472339, 2879 },
        { "encodings.cp1254", 6475218, 2868 },
        { "encodings.cp1255", 6478086, 2887 },
        { "encodings.cp1256", 6480973, 2865 },
        { "encodings.cp1257", 6483838, 2873 },
        { "encodings.cp1258", 6486711, 2871 },
        { "encodings.cp424", 6489582, 2859 },
        { "encodings.cp437", 6492441, 8064 },
        { "encodings.cp500", 6500505, 2829 },
        { "encodings.cp720", 6503334, 2926 },
        { "encodings.cp737", 6506260, 8292 },
        { "encodings.cp775", 6514552, 8078 },
        { "encodings.cp850", 6522630, 7811 },
        { "encodings.cp852", 6530441, 8080 },
        { "encodings.cp855", 6538521, 8261 },
        { "encodings.cp856", 6546782, 2891 },
        { "encodings.cp857", 6549673, 7801 },
        { "encodings.cp858", 6557474, 7781 },
        { "encodings.cp860", 6565255, 8047 },
        { "encodings.cp861", 6573302, 8058 },
        { "encodings.cp862", 6581360, 8193 },
        { "encodings.cp863", 6589553, 8058 },
        { "encodings.cp864", 6597611, 8189 },
        { "encodings.cp865", 6605800, 8058 },
        { "encodings.cp866", 6613858, 8293 },
        { "encodings.cp869", 6622151, 8105 },
        { "encodings.cp874", 6630256, 2957 },
        { "encodings.cp875", 6633213, 2826 },
        { "encodings.cp932", 6636039, 1756 },
        { "encodings.cp949", 6637795, 1756 },
        { "encodings.cp950", 6639551, 1756 },
        { "encodings.euc_jis_2004", 6641307, 1812 },
        { "encodings.euc_jisx0213", 6643119, 1812 },
        { "encodings.euc_jp", 6644931, 1764 },
        { "encodings.euc_kr", 6646695, 1764 },
        { "encodings.gb18030", 6648459, 1772 },
        { "encodings.gb2312", 6650231, 1764 },
        { "encodings.gbk", 6651995, 1740 },
        { "encodings.hex_codec", 6653735, 3781 },
        { "encodings.hp_roman8", 6657516, 4112 },
        { "encodings.hz", 6661628, 1732 },
        { "encodings.idna", 6663360, 6368 },
        { "encodings.iso2022_jp", 6669728, 1801 },
        { "encodings.iso2022_jp_1", 6671529, 1817 },
        { "encodings.iso2022_jp_2", 6673346, 1817 },
        { "encodings.iso2022_jp_2004", 6675163, 1841 },
        { "encodings.iso2022_jp_3", 6677004, 1817 },
        { "encodings.iso2022_jp_ext", 6678821, 1833 },
        { "encodings.iso2022_kr", 6680654, 1801 },
        { "encodings.iso8859_1", 6682455, 2868 },
        { "encodings.iso8859_10", 6685323, 2883 },
        { "encodings.iso8859_11", 6688206, 2977 },
        { "encodings.iso8859_13", 6691183, 2886 },
        { "encodings.iso8859_14", 6694069, 2904 },
        { "encodings.iso8859_15", 6696973, 2883 },
        { "encodings.iso8859_16", 6699856, 2885 },
        { "encodings.iso8859_2", 6702741, 2868 },
        { "encodings.iso8859_3", 6705609, 2875 },
        { "encodings.iso8859_4", 6708484, 2868 },
        { "encodings.iso8859_5", 6711352, 2869 },
        { "encodings.iso8859_6", 6714221, 2913 },
        { "encodings.iso8859_7", 6717134, 2876 },
        { "encodings.iso8859_8", 6720010, 2907 },
        { "encodings.iso8859_9", 6722917, 2868 },
        { "encodings.johab", 6725785, 1756 },
        { "encodings.koi8_r", 6727541, 2890 },
        { "encodings.koi8_u", 6730431, 2876 },
        { "encodings.latin_1", 6733307, 2283 },
        { "encodings.mac_arabic", 6735590, 8014 },
        { "encodings.mac_centeuro", 6743604, 2937 },
        { "encodings.mac_croatian", 6746541, 2945 },
        { "encodings.mac_cyrillic", 6749486, 2935 },
        { "encodings.mac_farsi", 6752421, 2849 },
        { "encodings.mac_greek", 6755270, 2889 },
        { "encodings.mac_iceland", 6758159, 2928 },
        { "encodings.mac_latin2", 6761087, 4907 },
        { "encodings.mac_roman", 6765994, 2906 },
        { "encodings.mac_romanian", 6768900, 2946 },
        { "encodings.mac_turkish", 6771846, 2929 },
        { "encodings.palmos", 6774775, 3066 },
        { "encodings.ptcp154", 6777841, 4890 },
        { "encodings.punycode", 6782731, 7942 },
        { "encodings.quopri_codec", 6790673, 3647 },
        { "encodings.raw_unicode_escape", 6794320, 2202 },
        { "encodings.rot_13", 6796522, 3656 },
        { "encodings.shift_jis", 6800178, 1788 },
        { "encodings.shift_jis_2004", 6801966, 1828 },
        { "encodings.shift_jisx0213", 6803794, 1828 },
        { "encodings.string_escape", 6805622, 2061 },
        { "encodings.tis_620", 6807683, 2938 },
        { "encodings.undefined", 6810621, 2589 },
        { "encodings.unicode_escape", 6813210, 2150 },
        { "encodings.unicode_internal", 6815360, 2176 },
        { "encodings.utf_16", 6817536, 5160 },
        { "encodings.utf_16_be", 6822696, 1990 },
        { "encodings.utf_16_le", 6824686, 1990 },
        { "encodings.utf_32", 6826676, 5724 },
        { "encodings.utf_32_be", 6832400, 1883 },
        { "encodings.utf_32_le", 6834283, 1883 },
        { "encodings.utf_7", 6836166, 1883 },
        { "encodings.utf_8", 6838049, 1942 },
        { "encodings.utf_8_sig", 6839991, 4977 },
        { "encodings.uu_codec", 6844968, 4909 },
        { "encodings.zlib_codec", 6849877, 4641 },
        { "functools", 6854518, 6561 },
        { "locale", 6861079, 56524 },
        { "quopri", 6917603, 6544 },
        { "re", 6924147, 13363 },
        { "sre_compile", 6937510, 12522 },
        { "sre_constants", 6950032, 6177 },
        { "sre_parse", 6956209, 21076 },
        { "string", 6977285, 20349 },
        { "stringprep", 6997634, 14439 },
        { "struct", 7012073, 229 },
        { "types", 7012302, 2703 },
        { NULL, 0, 0 }
    };

    struct frozen_desc *current = frozen_modules;

    for(;;)
    {
        destination->name = (char *)current->name;
        destination->code = (unsigned char *)&constant_bin[ current->start ];
        destination->size = current->size;

        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}
