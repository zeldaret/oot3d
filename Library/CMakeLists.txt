add_subdirectory(nnsdk)

target_link_options(nnsdk PRIVATE
    --cpu=MPCore --library_type=standardlib
    --ref_cpp_init --scanlib --legacyalign
    --tailreorder --no_remove --datacompressor=off
    --inline 
    --verbose --mangled --symbols
    )

target_compile_options(nnsdk PRIVATE $<$<COMPILE_LANGUAGE:CXX>:
    --apcs=//interwork --cpu=MPCore --fpmode=fast --cpp --arm --force_new_nothrow
    --signed_chars --multibyte-chars --locale=japanese --vfe
    --no_rtti_data --no_rtti --no_exceptions -O3 -Otime --data-reorder --split_sections --forceinline
    >)

target_compile_options(nnsdk PRIVATE $<$<COMPILE_LANGUAGE:C>:
    --apcs=//interwork --cpu=MPCore --fpmode=fast --c99 --arm
    --signed_chars --multibyte-chars --locale=japanese
    --data-reorder --split_sections
    >)
