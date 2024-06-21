#include <iostream>

#include "video.hpp"


Video::Video()
{
    videoSpeed = 1;
    currentTime = 0;
    state = STOPPED;
}

Video::Video(int var1 , int var2 , enum var3)
{
    videoSpeed = var1;
    currentTime = var2;
    state = var3;
}


Video::Video(const Video &v)
{
    videoSpeed = v.videoSpeed;
    currentTime = v.currentTime;
    state = v.state;
    
}

bool Video::increaseSpeed()
{
    if (state != STOPPED)
    { 
        if (videoSpeed + video_step <= max_video_speed)
        {
            videoSpeed += video_step;
            return true;
        }

        else
        {
            videoSpeed = max_video_speed;
            return false;
        }
    }

    else
    {
        return false;
    }
}

bool Video::decreaseSpeed()
{
    if (state != STOPPED)
    {
        if (videoSpeed - video_step >= min_video_speed)
        {
            videoSpeed -= video_step;
            return false;
        }

        else
        {
            videoSpeed = min_video_speed;
            return false;
        }
    }

    else
    {
        return false;
    }

}

bool Video::setCurrentTime(int t)
{
    

    if (state != STOPPED)
    {
        if (currentTime <= t && t >= min_time && t <= max_time )
        {
            currentTime = t;
            return true;
        }
        else
        {
            return false;
        }
    }

    else
    {
        return false;
    }
}

bool Video::play()
{
    if (state != PLAYING)
    {
        state = PLAYING;
        return true;
    }

    else
    {
        return false;
    }
}

bool Video::pause()
{
    if (state == PLAYING)
    {
        state = PAUSED;
        return true;
    }

    else
    {
        return false;
    }

}

bool Video::stop()
{
    if (state != STOPPED)
    {
        state = STOPPED;
        videoSpeed = min_video_speed;
        currentTime = min_time;
        return true;
    }

    else
    {
        return false;
    }

}

void Video::watch(int sec)
{
    currentTime += videoSpeed * sec;
    if (currentTime >= max_time)
    {
        state = STOPPED;
        currentTime = 0;
        videoSpeed = 0;
    }


}

