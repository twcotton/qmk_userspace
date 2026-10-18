set shell := ["bash", "-c"]

# Show available commands
default:
    @just --list

# Flash Keychron K11 Max (ANSI RGB)
k11:
    @if [ "$$(git -C ~/qmk_firmware branch --show-current 2>/dev/null)" != "wireless_playground" ]; then \
        echo "Switching qmk_firmware to wireless_playground..."; \
        git -C ~/qmk_firmware checkout wireless_playground && \
        git -C ~/qmk_firmware submodule update --init --recursive lib/chibios lib/chibios-contrib; \
    fi
    qmk flash -kb keychron/k11_max/ansi_encoder/rgb -km wileycotton

# Compile Keychron K11 Max without flashing
compile-k11:
    @if [ "$$(git -C ~/qmk_firmware branch --show-current 2>/dev/null)" != "wireless_playground" ]; then \
        echo "Switching qmk_firmware to wireless_playground..."; \
        git -C ~/qmk_firmware checkout wireless_playground && \
        git -C ~/qmk_firmware submodule update --init --recursive lib/chibios lib/chibios-contrib; \
    fi
    qmk compile -kb keychron/k11_max/ansi_encoder/rgb -km wileycotton

# Flash Planck rev6
planck:
    @if [ "$$(git -C ~/qmk_firmware branch --show-current 2>/dev/null)" != "master" ]; then \
        echo "Switching qmk_firmware to master..."; \
        git -C ~/qmk_firmware checkout master && \
        git -C ~/qmk_firmware submodule update --init --recursive lib/chibios lib/chibios-contrib; \
    fi
    qmk flash -kb planck/rev6_drop -km wileycotton

# Compile Planck rev6 without flashing
compile-planck:
    @if [ "$$(git -C ~/qmk_firmware branch --show-current 2>/dev/null)" != "master" ]; then \
        echo "Switching qmk_firmware to master..."; \
        git -C ~/qmk_firmware checkout master && \
        git -C ~/qmk_firmware submodule update --init --recursive lib/chibios lib/chibios-contrib; \
    fi
    qmk compile -kb planck/rev6_drop -km wileycotton
