/*
** EPITECH PROJECT, 2024
** server
** File description:
** check_live
*/

#include "server.h"

long long current_time_in_milliseconds()
{
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return (long long)tv.tv_sec * 1000 + tv.tv_usec / 1000;
}

bool check_live(server_t *server, client_t *client) {
    long long now = current_time_in_milliseconds();
    long long diff;

    if (client->player == NULL)
        return true;
    diff = now - client->player->last_eat;
    if (diff > INTERVAL_LIVE * 1000 / server->params->freq) {
        if (client->player->inventory[FOOD].quantity > 0) {
            client->player->inventory[FOOD].quantity--;
            client->player->last_eat = now;
            return true;
        } else {
            dprintf(client->fd, "dead\n");
            return false;
        }
    }
    return true;
}
