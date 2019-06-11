//////////////////////////////////////////////////////
// Copyright (C) Microsoft. 2018. All rights reserved.
//////////////////////////////////////////////////////


// This is automatically generated by PlayFab SDKGenerator. DO NOT modify this manually!
#pragma once

#include "CoreMinimal.h"
#include "Core/PlayFabError.h"
#include "Core/PlayFabAuthenticationDataModels.h"
#include "Core/PlayFabSettings.h"
#include "PlayFabAPISettings.h"
#include "Interfaces/IHttpRequest.h"
#include "Interfaces/IHttpResponse.h"

namespace PlayFab
{
    /**
     * Main interface for PlayFab Sdk, specifically all Authentication APIs
     */
    class PLAYFABCPP_API UPlayFabAuthenticationInstanceAPI
    {
    public:
        DECLARE_DELEGATE_OneParam(FGetEntityTokenDelegate, const AuthenticationModels::FGetEntityTokenResponse&);
        DECLARE_DELEGATE_OneParam(FValidateEntityTokenDelegate, const AuthenticationModels::FValidateEntityTokenResponse&);


    private:
        TSharedPtr<UPlayFabAPISettings> settings;
        TSharedPtr<UPlayFabAuthenticationContext> authContext;
    
    public:
        UPlayFabAuthenticationInstanceAPI();
        explicit UPlayFabAuthenticationInstanceAPI(TSharedPtr<UPlayFabAPISettings> apiSettings);
        explicit UPlayFabAuthenticationInstanceAPI(TSharedPtr<UPlayFabAuthenticationContext> authenticationContext);
        UPlayFabAuthenticationInstanceAPI(TSharedPtr<UPlayFabAPISettings> apiSettings, TSharedPtr<UPlayFabAuthenticationContext> authenticationContext);
        ~UPlayFabAuthenticationInstanceAPI();
        UPlayFabAuthenticationInstanceAPI(const UPlayFabAuthenticationInstanceAPI& source) = delete; // disable copy
        UPlayFabAuthenticationInstanceAPI(UPlayFabAuthenticationInstanceAPI&&) = delete; // disable move
        UPlayFabAuthenticationInstanceAPI& operator=(const UPlayFabAuthenticationInstanceAPI& source) = delete; // disable assignment
        UPlayFabAuthenticationInstanceAPI& operator=(UPlayFabAuthenticationInstanceAPI&& other) = delete; // disable move assignment

        int GetPendingCalls() const;
        TSharedPtr<UPlayFabAPISettings> GetSettings() const;
        void SetSettings(TSharedPtr<UPlayFabAPISettings> apiSettings);
        TSharedPtr<UPlayFabAuthenticationContext> GetAuthenticationContext() const;
        void SetAuthenticationContext(TSharedPtr<UPlayFabAuthenticationContext> authenticationContext);
        void ForgetAllCredentials();

    private:
        TSharedPtr<UPlayFabAuthenticationContext> GetOrCreateAuthenticationContext();
    
    public:


        // ------------ Generated API calls
        /**
         * Method to exchange a legacy AuthenticationTicket or title SecretKey for an Entity Token or to refresh a still valid
         * Entity Token.
         * This API must be called with X-SecretKey, X-Authentication or X-EntityToken headers. An optional EntityKey may be included to attempt to set the resulting EntityToken to a specific entity, however the entity must be a relation of the caller, such as the master_player_account of a character. If sending X-EntityToken the account will be marked as freshly logged in and will issue a new token. If using X-Authentication or X-EntityToken the header must still be valid and cannot be expired or revoked.
         */
        bool GetEntityToken(AuthenticationModels::FGetEntityTokenRequest& request, const FGetEntityTokenDelegate& SuccessDelegate = FGetEntityTokenDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        /**
         * Method for a server to validate a client provided EntityToken. Only callable by the title entity.
         * Given an entity token, validates that it hasn't exipired or been revoked and will return details of the owner.
         */
        bool ValidateEntityToken(AuthenticationModels::FValidateEntityTokenRequest& request, const FValidateEntityTokenDelegate& SuccessDelegate = FValidateEntityTokenDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());

    private:
        // ------------ Generated result handlers
        void OnGetEntityTokenResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetEntityTokenDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnValidateEntityTokenResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FValidateEntityTokenDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);

    };
};
