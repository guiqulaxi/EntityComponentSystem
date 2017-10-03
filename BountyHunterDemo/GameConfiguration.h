///-------------------------------------------------------------------------------------------------
/// File:	GameConfiguration.h.
///
/// Summary:	Declares the game configuration class.
///-------------------------------------------------------------------------------------------------

#ifndef __GAME_CONFIG_H__
#define __GAME_CONFIG_H__


/// Summary:	The game title.
static constexpr const char*		GAME_TITLE					{ "BountyHunter Demo" };

/// Summary:	Width of the game window.
static constexpr unsigned int		GAME_WINDOW_WIDTH			{ 800 };

/// Summary:	Height of the game window.
static constexpr unsigned int		GAME_WINDOW_HEIGHT			{ 600 };

/// Summary:	True if game should start in fullscreen mode.
static constexpr bool				GAME_WINDOW_FULLSCREEN		{ false };

/// Summary:	Defines the delta time step the game simulation will be advanced per update.
static constexpr float				DELTA_TIME_STEP				{ 1.0f / 60.0f };

#endif // __GAME_CONFIG_H__