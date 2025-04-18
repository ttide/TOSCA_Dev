//! \file  inflow.h
//! \brief Contains inflow boundary condition headers

// =============================================================================
// FUNCTIONS
// =============================================================================

//! \brief Initialize the inlet functions for inflow
PetscErrorCode SetInflowFunctions(mesh_ *mesh);

//! \brief print information regarding the inflow boundary mapping
PetscErrorCode printInflowMappingAction(mesh_ *mesh, inletFunctionTypes *ifPtr);

//! \brief allocate and set the inflow section fields
PetscErrorCode mappedInflowInitialize(inletFunctionTypes *ifPtr);

//! \brief Calculate interpolation weights for the mapped interpolated inflow boundary condition
PetscErrorCode SetInflowWeights(mesh_ *mesh, inletFunctionTypes *ifPtr);

//! \brief Reads inflow velocity from database and stores in inletFunction data
PetscErrorCode readInflowU(inletFunctionTypes *ifPtr, clock_ *clock);

//! \brief Reads inflow tempereature from database and stores in inletFunction data
PetscErrorCode readInflowT(inletFunctionTypes *ifPtr, clock_ *clock);

//! \brief Reads inflow sgs viscosity from database and stores in inletFunction data
PetscErrorCode readInflowNut(inletFunctionTypes *ifPtr, clock_ *clock);

//! \brief Sets the un-shifted boundary field to be used with shifted periodic BC (inflow function type 7)
PetscErrorCode setShiftedInflowU(inletFunctionTypes *ifPtr, ueqn_ *ueqn);

//! \brief Sets the un-shifted boundary field to be used with shifted periodic BC (inflow function type 7)
PetscErrorCode setShiftedInflowT(inletFunctionTypes *ifPtr, teqn_ *teqn);

//! \brief Sets the un-shifted boundary field to be used with shifted periodic BC (inflow function type 7)
PetscErrorCode setShiftedInflowNut(inletFunctionTypes *ifPtr, les_ *les);

//! \brief Nieuwstadt model for velocity inflow type 5
Cmpnts NieuwstadtInflowEvaluate(inletFunctionTypes *ifPtr, PetscReal h);
