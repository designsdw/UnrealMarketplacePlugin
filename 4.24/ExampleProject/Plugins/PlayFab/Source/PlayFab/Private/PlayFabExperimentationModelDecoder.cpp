//////////////////////////////////////////////////////
// Copyright (C) Microsoft. 2018. All rights reserved.
//////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////
// Automatically generated cpp file for the play fab models
//
// API: Experimentation
//////////////////////////////////////////////////////////////////////////////////////////////

#include "PlayFabExperimentationModelDecoder.h"
#include "PlayFabPrivate.h"

//////////////////////////////////////////////////////////////////////////
// Generated PlayFab Experimentation API Functions
//////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////
// Experimentation
//////////////////////////////////////////////////////

FExperimentationCreateExperimentResult UPlayFabExperimentationModelDecoder::decodeCreateExperimentResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FExperimentationCreateExperimentResult tempStruct;
    UPlayFabJsonObject* dataObj = !(response->HasField("data")) ? nullptr : response->GetObjectField("data");

    tempStruct.ExperimentId = !(dataObj->HasField("ExperimentId")) ? TEXT("") : dataObj->GetStringField("ExperimentId");

    return tempStruct;
}

FExperimentationEmptyResponse UPlayFabExperimentationModelDecoder::decodeEmptyResponseResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FExperimentationEmptyResponse tempStruct;


    return tempStruct;
}

FExperimentationGetExperimentsResult UPlayFabExperimentationModelDecoder::decodeGetExperimentsResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FExperimentationGetExperimentsResult tempStruct;
    UPlayFabJsonObject* dataObj = !(response->HasField("data")) ? nullptr : response->GetObjectField("data");

    tempStruct.Experiments = !(dataObj->HasField("Experiments")) ? TArray<UPlayFabJsonObject*>() : dataObj->GetObjectArrayField("Experiments");

    return tempStruct;
}

FExperimentationGetLatestScorecardResult UPlayFabExperimentationModelDecoder::decodeGetLatestScorecardResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FExperimentationGetLatestScorecardResult tempStruct;
    UPlayFabJsonObject* dataObj = !(response->HasField("data")) ? nullptr : response->GetObjectField("data");

    tempStruct.Scorecard = !(dataObj->HasField("Scorecard")) ? nullptr : dataObj->GetObjectField("Scorecard");

    return tempStruct;
}

FExperimentationGetTreatmentAssignmentResult UPlayFabExperimentationModelDecoder::decodeGetTreatmentAssignmentResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FExperimentationGetTreatmentAssignmentResult tempStruct;
    UPlayFabJsonObject* dataObj = !(response->HasField("data")) ? nullptr : response->GetObjectField("data");

    tempStruct.TreatmentAssignment = !(dataObj->HasField("TreatmentAssignment")) ? nullptr : dataObj->GetObjectField("TreatmentAssignment");

    return tempStruct;
}


