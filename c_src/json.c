#include "erl_nif.h"

ERL_NIF_TERM encode(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[]);
ERL_NIF_TERM decode(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[]);

int
on_load(ErlNifEnv* env, void** priv_data, ERL_NIF_TERM info)
{
    return 0;
}

int
on_reload(ErlNifEnv* env, void** priv_data, ERL_NIF_TERM info)
{
    return 0;
}

int
on_upgrade(ErlNifEnv* env, void** priv_data, void** old_data, ERL_NIF_TERM info)
{
    return 0;
}

static ErlNifFunc nif_funcs[] =
{
    {"encode", 1, encode},
    {"decode", 1, decode}
};

ERL_NIF_INIT(json, nif_funcs, &on_load, &on_reload, &on_upgrade, NULL);
